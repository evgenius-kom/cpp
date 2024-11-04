#include <atomic>

// The `constinit` keyword ensures that a variable is initialized at compile time.
// It tells the compiler that the variable must be initialized during static initialization, not dynamic initialization.

// `constinit` is used to prevent the "static initialization order fiasco," a situation where
// the initialization order of static variables across translation units is undefined, potentially leading to bugs.

// - Applies to variables with static or thread storage duration.
// - The variable must be initialized at compile time.
// - Unlike `const` variables, `constinit` variables can be mutable; they can be reassigned after initialization.
// - If the variable cannot be initialized at compile time, the compiler will emit an error.

constinit int constinit_global_value = 42;

// Use `constinit` when you have non-const variables with static or thread storage duration
// that must be initialized at compile time.

constexpr std::atomic<int> initialize_counter()
{
    return std::atomic<int>(0);
}

constinit std::atomic<int> counter = initialize_counter();
