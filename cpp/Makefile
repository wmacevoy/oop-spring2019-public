CXXFLAGS=-std=c++14 -Iinclude

tmp/Marker.o : src/Marker.cpp include/Marker.h include/BadMarkerState.h include/Color.h
	$(CXX) $(CXXFLAGS) -c -o $@ $<

tmp/BadMarkerState.o : src/BadMarkerState.cpp include/BadMarkerState.h
	$(CXX) $(CXXFLAGS) -c -o $@ $<

tmp/main.o : src/main.cpp include/Marker.h include/BadMarkerState.h include/Color.h
	$(CXX) $(CXXFLAGS) -c -o $@ $<

bin/marker : tmp/main.o tmp/Marker.o tmp/BadMarkerState.o
	$(CXX) $(CXXFLAGS) -o $@ $^


