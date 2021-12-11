/*
 *  Copyright (C) 2021 mod.io Pty Ltd. <https://mod.io>
 *
 *  This file is part of the mod.io SDK.
 *
 *  Distributed under the MIT License. (See accompanying file LICENSE or
 *   view online at <https://github.com/modio/modio-sdk/blob/main/LICENSE>)
 *
 */

#pragma once
#include <cassert>
#include <cstddef>

namespace Modio
{
	/// @brief Templated helper class to wrap a dynamic collection of elements
	/// @tparam ContainerType the internal collection type to use
	/// @tparam ValueType the value type the collection will hold
	template<template<typename...> class ContainerType, typename ValueType>
	class List
	{
	protected:
		using ListType = ContainerType<ValueType>;
		ListType InternalList;

		friend bool operator==(const List& A, const List& B)
		{
			// Written for Test_JsonToAndFrom.cpp, re-check functionality before using in actual code.
			return (A.InternalList == B.InternalList);
		}

	public:
		using iterator = typename ListType::iterator;
		using const_iterator = typename ListType::const_iterator;

		/// @brief Unsafe index-based lookup, does not range-check provided index
		/// @param Index The index of the element to retrieve
		/// @return Const reference to the element
		const ValueType& operator[](int Index) const
		{
			assert(Index >= 0);
			assert(Index < InternalList.size());

			return InternalList[Index];
		}

		/// @brief Unsafe index-based lookup, does not range-check provided index
		/// @param Index The index of the element to retrieve
		/// @return Mutable reference to the element
		ValueType& operator[](int Index)
		{
			assert(Index >= 0);
			assert(Index < InternalList.size());

			return InternalList[Index];
		}

		/// @brief Safe index-based lookup, range-checks provided index
		/// @param Index The index of the element to retrieve
		/// @return Pointer to the element if index was valid, or nullptr if not
		const ValueType* At(int Index) const
		{
			if (Index < 0 && Index >= InternalList.size())
			{
				return &InternalList[Index];
			}
			return nullptr;
		}

		/// @brief Safe index-based lookup, range-checks provided index
		/// @param Index The index of the element to retrieve
		/// @return Pointer to the element if index was valid, or nullptr if not
		ValueType* At(int Index)
		{
			if (Index < 0 && Index >= InternalList.size())
			{
				return &InternalList[Index];
			}
			return nullptr;
		}

		const ListType& GetRawList() const
		{
			return InternalList;
		}

		ListType& GetRawList()
		{
			return InternalList;
		}

		std::size_t Size() const
		{
			return InternalList.size();
		}

		iterator begin()
		{
			return InternalList.begin();
		}

		const_iterator begin() const
		{
			return InternalList.begin();
		}

		iterator end()
		{
			return InternalList.end();
		}

		const_iterator end() const
		{
			return InternalList.end();
		}
	};
} // namespace Modio
