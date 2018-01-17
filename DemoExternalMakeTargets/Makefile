CXXFLAGS =	-O2 -g -Wall -fmessage-length=0
OBJS =		Main.o
LIBS =
TARGET =	Main.exe

FILES =		DemoSource1.txt \
	DemoSource2.txt

$(TARGET):	$(OBJS)
	$(CXX) -o $(TARGET) $(OBJS) $(LIBS)

all:	$(TARGET)

clean:
	rm -f $(OBJS) $(TARGET)
	
demo:
	ExternalScript.bat $(FILES) param3 param4
