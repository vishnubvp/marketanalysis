INCLUDE1=/home/ec2-user/marketanalysis/MarketAnalysis/cppInterface
INC = -I$(INCLUDE1) -I/opt/Python-3.6.4/ -I/opt/Python-3.6.4/Include -I/opt/boost_1_66_0/ -I/opt/Python-3.6.4/PC/
all: clean target1 target2
clean:
	rm -rf *.o 
target1:
	g++ -c  -fPIC $(INC) Wrapper.cpp
target2:
	g++ -shared -o libWrapper.so Wrapper.o -L/opt/boost_1_66_0/stage/lib -lboost_python3  -L/home/ec2-user/marketanalysis/MarketAnalysis/cppInterface -lmarketclass
