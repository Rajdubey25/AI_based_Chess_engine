CXX = g++
CXXFLAGS = -std=c++17 -Wall -Wextra -O2 -I src -I src/chess_engine
SRC_DIR = src
BUILD_DIR = build
EXEC =chess_engine_executable

SRC_FILES = $(wildcard $(SRC_DIR)/**/*.cpp)
OBJ_FILES = $(patsubst $(SRC_DIR)/%.cpp, $(BUILD_DIR)/%.o, $(SRC_FILES))

$(EXEC): $(OBJ_FILES)
	$(CXX) $(CXXFLAGS) -o $@ $^

$(BUILD_DIR)/%.o: $(SRC_DIR)/%.cpp
	mkdir -p $(dir $@)
	$(CXX) $(CXXFLAGS) -c $< -o $@

clean:
	rm -rf $(BUILD_DIR)
