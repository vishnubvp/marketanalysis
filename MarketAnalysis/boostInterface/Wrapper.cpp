#include <boost/python.hpp>
#include "App.h"
BOOST_PYTHON_MODULE(Wrapper)
{
    using namespace boost::python;
    def("MonthDetails", &MonthDetailsClass::MonthDetailsFunc);
}
int main()
{
	return 0;
}
