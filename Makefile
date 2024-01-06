SRC_PATH=./src
OUT_PATH=./bin
FILES=main.cpp char_base.cpp item.cpp place.cpp storyteller.cpp
SOURCES = $(FILES:%.cpp=$(SRC_PATH)/%.cpp)

CC=g++
CFLAGS=-Wall

all:
	mkdir -p ${OUT_PATH}
	${CC} ${CFLAGS} -I ${SRC_PATH} ${SOURCES} -o ${OUT_PATH}/main
	${OUT_PATH}/main
	rm ${OUT_PATH}/main