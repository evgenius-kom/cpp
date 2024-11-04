// The `consteval` keyword specifies that a function is an immediate function.
// This means that any call to a `consteval` function must produce a compile-time constant.
// If it doesn't, the program is ill-formed and will not compile.

// Unlike `constexpr` functions, which can be evaluated at compile time or runtime depending on the context,
// `consteval` functions are always evaluated at compile time.

template <typename T>
consteval T do_smth(T x)
{
    return x;
}

// std::cout << do_smth(5) << std::endl; // OK
// int u = 6;
// std::cout << do_smth(u) << std::endl; // Error, since `u` is a runtime value
// constexpr int t = 7;
// std::cout << do_smth(t) << std::endl; // OK

// consteval if statement

constexpr bool is_constant_evaluated() noexcept
{
    if consteval
    {
        return true;
    }
    else
    {
        return false;
    }
}

// bool a = is_constant_evaluated();
// std::cout << std::boolalpha << a << std::endl; // false
// constexpr bool b = is_constant_evaluated();
// std::cout << std::boolalpha << b << std::endl; // true
