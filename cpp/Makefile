CC=g++
CFLAGS=-g -Wall

SRC_DIR=/home/oleander/learnLANG/cpp/src
BIN_DIR=/home/oleander/learnLANG/cpp/bin

T=

build_target:
ifeq ("$(T)","")
    $(error Usage: make T=<your_target>)
else
	$(CC) $(CFLAGS) -o $(BIN_DIR)/$(T) $(SRC_DIR)/$(T).cpp
	$(BIN_DIR)/$(T)
endif

clean:
	rm -f $(BIN_DIR)/*

.PHONY: build_target clean