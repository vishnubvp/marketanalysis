#include <boost/python.hpp>
#include "App.h"
BOOST_PYTHON_MODULE(Wrapper)
{
    using namespace boost::python;
    class_<MonthDetailsClass>("MonthDetailsClass")
    .def("MonthDetails", &MonthDetailsClass::MonthDetailsFunc);
}
