/*
 * Copyright (c) 2012-2018 Daniele Bartolini and individual contributors.
 * License: https://github.com/dbartolini/crown/blob/master/LICENSE
 */

#pragma once

#include "core/types.h"

namespace crown
{
/// Mutex.
///
/// @ingroup Thread
struct Mutex
{
	CE_ALIGN_DECL(16, u8 _data[64]);

	///
	Mutex();

	///
	~Mutex();

	///
	Mutex(const Mutex&) = delete;

	///
	Mutex& operator=(const Mutex&) = delete;

	/// Locks the mutex.
	void lock();

	/// Unlocks the mutex.
	void unlock();

	/// Returns the native mutex handle.
	void* native_handle();
};

} // namespace crown
