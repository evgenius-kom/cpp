#include <cstddef> // size_t

// calculates the number of elements in a C-style array at compile time
template <typename T, size_t N>
constexpr size_t size(const T (&arr)[N]) noexcept
{
    return N;
}

// When you pass an array to a function in C++, it typically decays to a pointer to its first element,
// losing information about its size. By passing the array as a reference, you preserve the array type and size information.
// Without parentheses, const T& arr[N] would be interpreted as an array of references (N references to const T),
// which is illegal in C++. The parentheses ensure that & applies to arr, making it a reference to an array.

// constexpr int a[]{ 5, 4, 3, 2, 1 };
// std::cout << size(a) << std::endl;

// https://en.cppreference.com/w/cpp/iterator/size
// another possible implementation of std::size() in STL
// template<class C>
// constexpr auto size(const C& c) -> decltype(c.size())
// {
//     return c.size();
// }
