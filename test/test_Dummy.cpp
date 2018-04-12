#include <boost/test/unit_test.hpp>
#include <orc_module/Dummy.hpp>

using namespace orc_module;

BOOST_AUTO_TEST_CASE(it_should_not_crash_when_welcome_is_called)
{
    orc_module::DummyClass dummy;
    dummy.welcome();
}
