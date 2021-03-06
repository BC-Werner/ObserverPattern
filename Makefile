PROGRAM_NAME = ObserverPattern
CC = c++
CFLAGS = -I $(IncludeDir)

IncludeDir = ./lib/Observer/include/Observer/
IncludeSrc = ./lib/Observer/src/

BUILD_DIR = builds/
BUILD_OBJ = $(BUILD_DIR)obj/

OBJECTS = ConcreteObserver.o ConcreteObserverB.o ConcreteSubject.o  Observer.o Subject.o
OBJS = $(foreach obj, $(OBJECTS), $(BUILD_OBJ)$(obj))

$(PROGRAM_NAME): $(BUILD_OBJ) $(OBJS) Main.o
	$(CC) $(OBJS) $(BUILD_OBJ)Main.o -o $(BUILD_DIR)$@
	
Main.o: ./src/main.cpp
	$(CC) $(CFLAGS) -c $< -o $(BUILD_OBJ)$@
	
$(BUILD_OBJ)%.o: $(IncludeSrc)%.cpp
	$(CC) $(CFLAGS) -c $< -o $@
	
$(BUILD_OBJ):
	mkdir -p $@

clean:
	@find . -type f -name '*.o' -print -delete
	@find . -type f -name '$(PROGRAM_NAME)' -print -delete
	
run: 
	@$(BUILD_DIR)$(PROGRAM_NAME)
