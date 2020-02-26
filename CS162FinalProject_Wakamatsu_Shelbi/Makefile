CXX = g++
CXXFLAGS = -std=c++0x 
CXXFLAGS += -Wall 
CXXFLAGS += -pedantic-errors
CXXFLAGS += -g
#CXXFLAGS += -O3
LDFLAGS = -lboost_date_time

OBJS = StrangerThingsMain.o Space.o ScoopsAhoy.o TheGap.o RadioShack.o HotDogOnAStick.o TimeOutArcade.o LYNXTransport.o StarcourtMall.o Player.o Item.o validation.o

SRCS = StrangerThingsMain.cpp Space.cpp ScoopsAhoy.cpp TheGap.cpp RadioShack.cpp HotDogOnAStick.cpp TimeOutArcade.cpp LYNXTransport.cpp StarcourtMall.cpp Player.cpp Item.cpp validation.cpp

HEADERS = Space.hpp ScoopsAhoy.hpp TheGap.cpp RadioShack.hpp HotDogOnAStick.hpp TimeOutArcade.hpp LYNXTransport.hpp StarcourtMall.hpp Player.hpp Item.hpp validation.hpp

output: ${OBJS} ${HEADERS}
	${CXX} ${LDFLAGS} ${OBJS} -o output

${OBJS}: ${SRCS}
	${CXX} ${CXXFLAGS} -c $(@:.o=.cpp)

clean:
	rm *.o output

