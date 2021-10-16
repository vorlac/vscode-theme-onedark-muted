#include <vector>
#include <string>

namespace ns
{
    class thing
    {
    public:
        thing() = default;

        const std::vector<std::string> &get_vec() const
        {
            return _vec;
        }

        int increment_var(int num)
        {
            _var += num;
            return _var;
        }

    private:
        int _var = 0;
        std::vector<std::string> _vec = {"string", "another_string"};
        constexpr static const char *const SOME_CONST_DEF = "const_def";
    };
}

int main(int argc, char **argv)
{
    ns::thing *thingy = new ns::thing();
    if (thingy != nullptr)
    {
        thingy->increment_var(7);
        auto &vec = thingy->get_vec();
        delete thingy;
        thingy = nullptr;
    }

    return 0;
}