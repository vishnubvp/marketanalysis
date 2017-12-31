INCLUDE1=/home/ec2-user/marketanalysis/MarketAnalysis/cppInterface
INCLUDE2=/opt/boost-install/include
INC = -I$(INCLUDE1) -I$(INCLUDE2) -I/opt/Python-3.6.4/ -I/opt/Python-3.6.4/Include
all: clean target1 target2
clean:
	rm -rf *.o *.so
target1:
	g++ -c -fpic $(INC) Wrapper.cpp
target2:
	g++ -shared -o libWrapper.so Wrapper.o -L/opt/boost-install/lib -L/opt/Python-3.6.4 -L/opt/boost_1_66_0/stage/lib #-lpython3.6m.a -libboost_python
