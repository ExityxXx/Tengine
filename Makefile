# Компилятор
CXX = g++
# Флаги компиляции
CXXFLAGS = -I./include -std=c++20 -O4
# Целевой исполняемый файл
TARGET = test
# Директория с исходниками
SRC_DIR = source
# Исходные файлы
SOURCES = $(wildcard $(SRC_DIR)/*.cpp)
# Объектные файлы
OBJECTS = $(SOURCES:.cpp=.o)

.PHONY: all clean run

all: $(TARGET)

# Сборка исполняемого файла
$(TARGET): $(OBJECTS)
	$(CXX) $(CXXFLAGS) $^ -o $@

# Компиляция .cpp файлов в .o файлы
$(SRC_DIR)/%.o: $(SRC_DIR)/%.cpp
	$(CXX) $(CXXFLAGS) -c $< -o $@

# Очистка
clean:
	rm -f $(OBJECTS) $(TARGET)

# Запуск
run: $(TARGET)
	./$(TARGET)

# Показывает переменные (для отладки)
debug:
	@echo "Sources: $(SOURCES)"
	@echo "Objects: $(OBJECTS)"