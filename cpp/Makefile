CXXFLAGS=-std=c++14 -Iinclude -fPIC -pthread

all : bin/marker

tmp/Color.o : src/Color.cpp include/Color.h
	$(CXX) $(CXXFLAGS) -c -o $@ $<

tmp/WritingUtensil.o : src/WritingUtensil.cpp include/WritingUtensil.h include/BadMarkerState.h include/Color.h
	$(CXX) $(CXXFLAGS) -c -o $@ $<

tmp/Marker.o : src/Marker.cpp include/WritingUtensil.h include/Marker.h include/BadMarkerState.h include/Color.h
	$(CXX) $(CXXFLAGS) -c -o $@ $<

tmp/Pencil.o : src/Pencil.cpp include/WritingUtensil.h include/Pencil.h include/Color.h
	$(CXX) $(CXXFLAGS) -c -o $@ $<

tmp/PencilMarker.o : src/PencilMarker.cpp include/WritingUtensil.h include/Pencil.h include/Marker.h include/PencilMarker.h include/BadMarkerState.h include/Color.h
	$(CXX) $(CXXFLAGS) -c -o $@ $<

tmp/BadMarkerState.o : src/BadMarkerState.cpp include/BadMarkerState.h
	$(CXX) $(CXXFLAGS) -c -o $@ $<

lib/libmarker.so : tmp/Marker.o tmp/Pencil.o tmp/PencilMarker.o tmp/BadMarkerState.o tmp/WritingUtensil.o tmp/Color.o
	$(CXX) $(CXXFLAGS) -shared -o $@ $^

tmp/main.o : src/main.cpp include/Marker.h include/Pencil.h include/PencilMarker.h include/WritingUtensil.h include/BadMarkerState.h include/Color.h
	$(CXX) $(CXXFLAGS) -c -o $@ $<

tmp/mtmain.o : src/mtmain.cpp include/Marker.h include/Pencil.h include/PencilMarker.h include/WritingUtensil.h include/BadMarkerState.h include/Color.h
	$(CXX) $(CXXFLAGS) -c -o $@ $<

bin/marker : tmp/main.o lib/libmarker.so
	$(CXX) $(CXXFLAGS) -o $@ $^

bin/pusher : tmp/mtmain.o lib/libmarker.so
	$(CXX) $(CXXFLAGS) -o $@ $^ -lpthread