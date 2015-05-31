/* FiberTaskingLib - A tasking library that uses fibers for efficient task switching
 *
 * This library was created as a proof of concept of the ideas presented by
 * Christian Gyrling in his 2015 GDC Talk 'Parallelizing the Naughty Dog Engine Using Fibers'
 *
 * http://gdcvault.com/play/1022186/Parallelizing-the-Naughty-Dog-Engine
 *
 * FiberTaskingLib is the legal property of Adrian Astley
 * Copyright Adrian Astley 2015
 */

#pragma once

#include <cstdint>

#if (defined( __GNUC__) || defined(__GNUG__)) && __GNUC__ < 5

namespace std {

inline void *align(size_t alignment, size_t size, void *start, size_t bufferSize) {
	return (void*)((reinterpret_cast<uintptr_t>(start) + static_cast<uintptr_t>(alignment - 1)) & static_cast<uintptr_t>(~(alignment - 1)));
}

} // End of namespace std

#endif
