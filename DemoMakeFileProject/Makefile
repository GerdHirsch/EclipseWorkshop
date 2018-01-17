CXXFLAGS =	-O2 -g -Wall -fmessage-length=0

OBJS =		DemoMakeFileProject.o

LIBS =

TARGET =	DemoMakeFileProject.exe

$(TARGET):	$(OBJS)
	$(CXX) -o $(TARGET) $(OBJS) $(LIBS)

all:	$(TARGET)

clean:
	rm -f $(OBJS) $(TARGET)
