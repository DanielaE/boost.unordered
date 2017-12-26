
// Copyright 2009 Daniel James.
// Distributed under the Boost Software License, Version 1.0. (See accompanying
// file LICENSE_1_0.txt or copy at http://www.boost.org/LICENSE_1_0.txt)

#if defined(_WIN32_WCE)
// The standard windows mobile headers trigger this warning so I disable it
// before doing anything else.
#pragma warning(disable : 4201) // nonstandard extension used :
                                // nameless struct/union
#endif

// the tests trigger a lot of deprecation warnings when compiled with msvc in C++17 mode
#if defined(_MSVC_LANG) && _MSVC_LANG > 201402
// warning STL4007: Many result_type typedefs and all argument_type, first_argument_type, and second_argument_type typedefs are deprecated in C++17
#define _SILENCE_CXX17_ADAPTOR_TYPEDEFS_DEPRECATION_WARNING
#if BOOST_UNORDERED_USE_ALLOCATOR_TRAITS != 1
// warning STL4010: Various members of std::allocator are deprecated in C++17
#define _SILENCE_CXX17_OLD_ALLOCATOR_MEMBERS_DEPRECATION_WARNING
#endif
#endif
