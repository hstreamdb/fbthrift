#
# Autogenerated by Thrift
#
# DO NOT EDIT UNLESS YOU ARE SURE THAT YOU KNOW WHAT YOU ARE DOING
#  @generated
#
cimport cython as __cython
from cpython.bytes cimport PyBytes_AsStringAndSize
from cpython.object cimport PyTypeObject, Py_LT, Py_LE, Py_EQ, Py_NE, Py_GT, Py_GE
from libcpp.memory cimport shared_ptr, make_shared, unique_ptr, make_unique
from libcpp.string cimport string
from libcpp cimport bool as cbool
from libcpp.iterator cimport inserter as cinserter
from cpython cimport bool as pbool
from libc.stdint cimport int8_t, int16_t, int32_t, int64_t, uint32_t
from cython.operator cimport dereference as deref, preincrement as inc, address as ptr_address
import thrift.py3.types
cimport thrift.py3.types
cimport thrift.py3.exceptions
from thrift.py3.types import NOTSET as __NOTSET
from thrift.py3.types cimport (
    translate_cpp_enum_to_python,
    SetMetaClass as __SetMetaClass,
    constant_shared_ptr,
)
cimport thrift.py3.std_libcpp as std_libcpp
from thrift.py3.serializer import Protocol as __Protocol
cimport thrift.py3.serializer as serializer
from thrift.py3.serializer import deserialize, serialize
import folly.iobuf as __iobuf
from folly.optional cimport cOptional

import sys
import itertools
from collections.abc import Sequence, Set, Mapping, Iterable
import warnings
import weakref as __weakref
import builtins as _builtins


cdef cFoo _Foo_defaults = cFoo()

cdef class Foo(thrift.py3.types.Struct):

    def __init__(
        Foo self, *,
        myInteger,
        str myString=None,
        myBools=None,
        myNumbers not None
    ):
        if myInteger is not None:
            if not isinstance(myInteger, int):
                raise TypeError(f'myInteger is not a { int !r}.')
            myInteger = <int32_t> myInteger

        self._cpp_obj = move(Foo._make_instance(
          NULL,
          NULL,
          myInteger,
          myString,
          myBools,
          myNumbers,
        ))

    def __call__(
        Foo self,
        myInteger=__NOTSET,
        myString=__NOTSET,
        myBools=__NOTSET,
        myNumbers=__NOTSET
    ):
        ___NOTSET = __NOTSET  # Cheaper for larger structs
        cdef bint[4] __isNOTSET  # so make_instance is typed

        changes = False
        if myInteger is ___NOTSET:
            __isNOTSET[0] = True
            myInteger = None
        else:
            __isNOTSET[0] = False
            changes = True

        if myString is ___NOTSET:
            __isNOTSET[1] = True
            myString = None
        else:
            __isNOTSET[1] = False
            changes = True

        if myBools is ___NOTSET:
            __isNOTSET[2] = True
            myBools = None
        else:
            __isNOTSET[2] = False
            changes = True

        if myNumbers is ___NOTSET:
            __isNOTSET[3] = True
            myNumbers = None
        else:
            __isNOTSET[3] = False
            changes = True


        if not changes:
            return self

        if not __isNOTSET[0] and myInteger is None:
            raise TypeError('field myInteger is required and has no default, it can not be unset')
        if myInteger is not None:
            if not isinstance(myInteger, int):
                raise TypeError(f'myInteger is not a { int !r}.')
            myInteger = <int32_t> myInteger

        if myString is not None:
            if not isinstance(myString, str):
                raise TypeError(f'myString is not a { str !r}.')

        if not __isNOTSET[3] and myNumbers is None:
            raise TypeError('field myNumbers is required and has no default, it can not be unset')
        inst = <Foo>Foo.__new__(Foo)
        inst._cpp_obj = move(Foo._make_instance(
          self._cpp_obj.get(),
          __isNOTSET,
          myInteger,
          myString,
          myBools,
          myNumbers,
        ))
        return inst

    @staticmethod
    cdef unique_ptr[cFoo] _make_instance(
        cFoo* base_instance,
        bint* __isNOTSET,
        object myInteger ,
        str myString ,
        object myBools ,
        object myNumbers 
    ) except *:
        cdef unique_ptr[cFoo] c_inst
        if base_instance:
            c_inst = make_unique[cFoo](deref(base_instance))
        else:
            c_inst = make_unique[cFoo]()

        if base_instance:
            # Convert None's to default value. (or unset)
            if not __isNOTSET[0] and myInteger is None:
                pass

            if not __isNOTSET[1] and myString is None:
                deref(c_inst).__isset.myString = False
                pass

            if not __isNOTSET[2] and myBools is None:
                deref(c_inst).myBools = _Foo_defaults.myBools
                deref(c_inst).__isset.myBools = False
                pass

            if not __isNOTSET[3] and myNumbers is None:
                pass

        if myInteger is not None:
            deref(c_inst).myInteger = myInteger
        if myString is not None:
            deref(c_inst).myString = thrift.py3.types.move(thrift.py3.types.bytes_to_string(myString.encode('utf-8')))
            deref(c_inst).__isset.myString = True
        if myBools is not None:
            deref(c_inst).myBools = deref(List__bool(myBools)._cpp_obj)
            deref(c_inst).__isset.myBools = True
        if myNumbers is not None:
            deref(c_inst).myNumbers = deref(List__i32(myNumbers)._cpp_obj)
        # in C++ you don't have to call move(), but this doesn't translate
        # into a C++ return statement, so you do here
        return move_unique(c_inst)

    def __iter__(self):
        yield 'myInteger', self.myInteger
        yield 'myString', self.myString
        yield 'myBools', self.myBools
        yield 'myNumbers', self.myNumbers

    def __bool__(self):
        return True

    @staticmethod
    cdef create(shared_ptr[cFoo] cpp_obj):
        inst = <Foo>Foo.__new__(Foo)
        inst._cpp_obj = move_shared(cpp_obj)
        return inst

    @property
    def myInteger(self):

        return deref(self._cpp_obj).myInteger

    @property
    def myString(self):
        if not deref(self._cpp_obj).__isset.myString:
            return None

        return (<bytes>deref(self._cpp_obj).myString).decode('UTF-8')

    @property
    def myBools(self):

        if self.__field_myBools is None:
            self.__field_myBools = List__bool.create(reference_shared_ptr_myBools(self._cpp_obj, deref(self._cpp_obj).myBools))
        return self.__field_myBools

    @property
    def myNumbers(self):

        if self.__field_myNumbers is None:
            self.__field_myNumbers = List__i32.create(reference_shared_ptr_myNumbers(self._cpp_obj, deref(self._cpp_obj).myNumbers))
        return self.__field_myNumbers


    def __hash__(Foo self):
        if not self.__hash:
            self.__hash = hash((
            self.myInteger,
            self.myString,
            self.myBools,
            self.myNumbers,
            ))
        return self.__hash

    def __repr__(Foo self):
        return f'Foo(myInteger={repr(self.myInteger)}, myString={repr(self.myString)}, myBools={repr(self.myBools)}, myNumbers={repr(self.myNumbers)})'
    def __copy__(Foo self):
        cdef shared_ptr[cFoo] cpp_obj = make_shared[cFoo](
            deref(self._cpp_obj)
        )
        return Foo.create(move_shared(cpp_obj))

    def __richcmp__(self, other, op):
        cdef int cop = op
        if not (
                isinstance(self, Foo) and
                isinstance(other, Foo)):
            if cop == Py_EQ:  # different types are never equal
                return False
            elif cop == Py_NE:  # different types are always notequal
                return True
            else:
                return NotImplemented

        cdef cFoo* cself = (<Foo>self)._cpp_obj.get()
        cdef cFoo* cother = (<Foo>other)._cpp_obj.get()
        if cop == Py_EQ:
            return deref(cself) == deref(cother)
        elif cop == Py_NE:
            return not (deref(cself) == deref(cother))
        elif cop == Py_LT:
            return deref(cself) < deref(cother)
        elif cop == Py_LE:
            return deref(cself) <= deref(cother)
        elif cop == Py_GT:
            return deref(cself) > deref(cother)
        elif cop == Py_GE:
            return deref(cself) >= deref(cother)
        else:
            return NotImplemented

    cdef __iobuf.IOBuf _serialize(Foo self, proto):
        cdef __iobuf.cIOBufQueue queue = __iobuf.cIOBufQueue(__iobuf.cacheChainLength())
        cdef cFoo* cpp_obj = self._cpp_obj.get()
        if proto is __Protocol.COMPACT:
            with nogil:
                serializer.CompactSerialize[cFoo](deref(cpp_obj), &queue, serializer.SHARE_EXTERNAL_BUFFER)
        elif proto is __Protocol.BINARY:
            with nogil:
                serializer.BinarySerialize[cFoo](deref(cpp_obj), &queue, serializer.SHARE_EXTERNAL_BUFFER)
        elif proto is __Protocol.JSON:
            with nogil:
                serializer.JSONSerialize[cFoo](deref(cpp_obj), &queue, serializer.SHARE_EXTERNAL_BUFFER)
        elif proto is __Protocol.COMPACT_JSON:
            with nogil:
                serializer.CompactJSONSerialize[cFoo](deref(cpp_obj), &queue, serializer.SHARE_EXTERNAL_BUFFER)
        return __iobuf.from_unique_ptr(queue.move())

    cdef uint32_t _deserialize(Foo self, const __iobuf.cIOBuf* buf, proto) except? 0:
        cdef uint32_t needed
        self._cpp_obj = make_shared[cFoo]()
        cdef cFoo* cpp_obj = self._cpp_obj.get()
        if proto is __Protocol.COMPACT:
            with nogil:
                needed = serializer.CompactDeserialize[cFoo](buf, deref(cpp_obj), serializer.SHARE_EXTERNAL_BUFFER)
        elif proto is __Protocol.BINARY:
            with nogil:
                needed = serializer.BinaryDeserialize[cFoo](buf, deref(cpp_obj), serializer.SHARE_EXTERNAL_BUFFER)
        elif proto is __Protocol.JSON:
            with nogil:
                needed = serializer.JSONDeserialize[cFoo](buf, deref(cpp_obj), serializer.SHARE_EXTERNAL_BUFFER)
        elif proto is __Protocol.COMPACT_JSON:
            with nogil:
                needed = serializer.CompactJSONDeserialize[cFoo](buf, deref(cpp_obj), serializer.SHARE_EXTERNAL_BUFFER)
        return needed

    def __reduce__(self):
        return (deserialize, (Foo, serialize(self)))


cdef class List__bool:
    def __init__(self, items=None):
        if isinstance(items, List__bool):
            self._cpp_obj = (<List__bool> items)._cpp_obj
        else:
            self._cpp_obj = List__bool._make_instance(items)

    @staticmethod
    cdef create(shared_ptr[vector[cbool]] c_items):
        inst = <List__bool>List__bool.__new__(List__bool)
        inst._cpp_obj = move_shared(c_items)
        return inst

    def __copy__(List__bool self):
        cdef shared_ptr[vector[cbool]] cpp_obj = make_shared[vector[cbool]](
            deref(self._cpp_obj)
        )
        return List__bool.create(move_shared(cpp_obj))

    @staticmethod
    cdef shared_ptr[vector[cbool]] _make_instance(object items) except *:
        cdef shared_ptr[vector[cbool]] c_inst = make_shared[vector[cbool]]()
        if items is not None:
            for item in items:
                if not isinstance(item, bool):
                    raise TypeError(f"{item!r} is not of type bool")
                deref(c_inst).push_back(item)
        return c_inst

    def __add__(object self, object other):
        return type(self)(itertools.chain(self, other))

    def __getitem__(self, object index_obj):
        cdef shared_ptr[vector[cbool]] c_inst
        cdef cbool citem
        if isinstance(index_obj, slice):
            c_inst = make_shared[vector[cbool]]()
            sz = deref(self._cpp_obj).size()
            for index in range(*index_obj.indices(sz)):
                deref(c_inst).push_back(deref(self._cpp_obj)[index])
            return List__bool.create(move_shared(c_inst))
        else:
            index = <int?>index_obj
            size = len(self)
            # Convert a negative index
            if index < 0:
                index = size + index
            if index >= size or index < 0:
                raise IndexError('list index out of range')
            citem = deref(self._cpp_obj)[index]
            return citem

    def __len__(self):
        return deref(self._cpp_obj).size()

    def __eq__(self, other):
        return thrift.py3.types.list_compare(self, other, Py_EQ)

    def __ne__(self, other):
        return not thrift.py3.types.list_compare(self, other, Py_EQ)

    def __lt__(self, other):
        return thrift.py3.types.list_compare(self, other, Py_LT)

    def __gt__(self, other):
        return thrift.py3.types.list_compare(other, self, Py_LT)

    def __le__(self, other):
        result = thrift.py3.types.list_compare(other, self, Py_LT)
        return not result if result is not NotImplemented else NotImplemented

    def __ge__(self, other):
        result = thrift.py3.types.list_compare(self, other, Py_LT)
        return not result if result is not NotImplemented else NotImplemented

    def __hash__(self):
        if not self.__hash:
            self.__hash = hash(tuple(self))
        return self.__hash

    def __contains__(self, item):
        if not self or item is None:
            return False
        if not isinstance(item, bool):
            return False
        return std_libcpp.find[vector[cbool].iterator, cbool](deref(self._cpp_obj).begin(), deref(self._cpp_obj).end(), item) != deref(self._cpp_obj).end()

    def __iter__(self):
        if not self:
            raise StopIteration
        cdef cbool citem
        cdef vector[cbool].iterator loc = deref(self._cpp_obj).begin()
        while loc != deref(self._cpp_obj).end():
            citem = deref(loc)
            yield citem
            inc(loc)

    def __repr__(self):
        if not self:
            return 'i[]'
        return f'i[{", ".join(map(repr, self))}]'

    def __reversed__(self):
        if not self:
            raise StopIteration
        cdef cbool citem
        cdef vector[cbool].reverse_iterator loc = deref(self._cpp_obj).rbegin()
        while loc != deref(self._cpp_obj).rend():
            citem = deref(loc)
            yield citem
            inc(loc)

    def index(self, item, start not None=__NOTSET, stop not None=__NOTSET):
        err = ValueError(f'{item} is not in list')
        if not self or item is None:
            raise err
        offset_begin = offset_end = 0
        if stop is not __NOTSET or start is not __NOTSET:
            # Like self[start:stop].index(item)
            size = len(self)
            stop = stop if stop is not __NOTSET else size
            start = start if start is not __NOTSET else 0
            # Convert stop to a negative position.
            if stop > 0:
                stop = min(stop - size, 0)
            if stop <= -size:
                raise err  # List would be empty
            offset_end = -stop
            # Convert start to always be positive
            if start < 0:
                start = max(size + start, 0)
            if start >= size:
                raise err  # past end of list
            offset_begin = start

        if not isinstance(item, bool):
            raise err
        cdef vector[cbool].iterator end = std_libcpp.prev(deref(self._cpp_obj).end(), <int64_t>offset_end)
        cdef vector[cbool].iterator loc = std_libcpp.find[vector[cbool].iterator, cbool](
            std_libcpp.next(deref(self._cpp_obj).begin(), <int64_t>offset_begin),
            end,
            item        )
        if loc != end:
            return <int64_t> std_libcpp.distance(deref(self._cpp_obj).begin(), loc)
        raise err

    def count(self, item):
        if not self or item is None:
            return 0
        if not isinstance(item, bool):
            return 0
        return <int64_t> std_libcpp.count[vector[cbool].iterator, cbool](
            deref(self._cpp_obj).begin(), deref(self._cpp_obj).end(), item)

    def __reduce__(self):
        return (List__bool, (list(self), ))


Sequence.register(List__bool)

cdef class List__i32:
    def __init__(self, items=None):
        if isinstance(items, List__i32):
            self._cpp_obj = (<List__i32> items)._cpp_obj
        else:
            self._cpp_obj = List__i32._make_instance(items)

    @staticmethod
    cdef create(shared_ptr[vector[int32_t]] c_items):
        inst = <List__i32>List__i32.__new__(List__i32)
        inst._cpp_obj = move_shared(c_items)
        return inst

    def __copy__(List__i32 self):
        cdef shared_ptr[vector[int32_t]] cpp_obj = make_shared[vector[int32_t]](
            deref(self._cpp_obj)
        )
        return List__i32.create(move_shared(cpp_obj))

    @staticmethod
    cdef shared_ptr[vector[int32_t]] _make_instance(object items) except *:
        cdef shared_ptr[vector[int32_t]] c_inst = make_shared[vector[int32_t]]()
        if items is not None:
            for item in items:
                if not isinstance(item, int):
                    raise TypeError(f"{item!r} is not of type int")
                item = <int32_t> item
                deref(c_inst).push_back(item)
        return c_inst

    def __add__(object self, object other):
        return type(self)(itertools.chain(self, other))

    def __getitem__(self, object index_obj):
        cdef shared_ptr[vector[int32_t]] c_inst
        cdef int32_t citem
        if isinstance(index_obj, slice):
            c_inst = make_shared[vector[int32_t]]()
            sz = deref(self._cpp_obj).size()
            for index in range(*index_obj.indices(sz)):
                deref(c_inst).push_back(deref(self._cpp_obj)[index])
            return List__i32.create(move_shared(c_inst))
        else:
            index = <int?>index_obj
            size = len(self)
            # Convert a negative index
            if index < 0:
                index = size + index
            if index >= size or index < 0:
                raise IndexError('list index out of range')
            citem = deref(self._cpp_obj)[index]
            return citem

    def __len__(self):
        return deref(self._cpp_obj).size()

    def __eq__(self, other):
        return thrift.py3.types.list_compare(self, other, Py_EQ)

    def __ne__(self, other):
        return not thrift.py3.types.list_compare(self, other, Py_EQ)

    def __lt__(self, other):
        return thrift.py3.types.list_compare(self, other, Py_LT)

    def __gt__(self, other):
        return thrift.py3.types.list_compare(other, self, Py_LT)

    def __le__(self, other):
        result = thrift.py3.types.list_compare(other, self, Py_LT)
        return not result if result is not NotImplemented else NotImplemented

    def __ge__(self, other):
        result = thrift.py3.types.list_compare(self, other, Py_LT)
        return not result if result is not NotImplemented else NotImplemented

    def __hash__(self):
        if not self.__hash:
            self.__hash = hash(tuple(self))
        return self.__hash

    def __contains__(self, item):
        if not self or item is None:
            return False
        if not isinstance(item, int):
            return False
        return std_libcpp.find[vector[int32_t].iterator, int32_t](deref(self._cpp_obj).begin(), deref(self._cpp_obj).end(), item) != deref(self._cpp_obj).end()

    def __iter__(self):
        if not self:
            raise StopIteration
        cdef int32_t citem
        cdef vector[int32_t].iterator loc = deref(self._cpp_obj).begin()
        while loc != deref(self._cpp_obj).end():
            citem = deref(loc)
            yield citem
            inc(loc)

    def __repr__(self):
        if not self:
            return 'i[]'
        return f'i[{", ".join(map(repr, self))}]'

    def __reversed__(self):
        if not self:
            raise StopIteration
        cdef int32_t citem
        cdef vector[int32_t].reverse_iterator loc = deref(self._cpp_obj).rbegin()
        while loc != deref(self._cpp_obj).rend():
            citem = deref(loc)
            yield citem
            inc(loc)

    def index(self, item, start not None=__NOTSET, stop not None=__NOTSET):
        err = ValueError(f'{item} is not in list')
        if not self or item is None:
            raise err
        offset_begin = offset_end = 0
        if stop is not __NOTSET or start is not __NOTSET:
            # Like self[start:stop].index(item)
            size = len(self)
            stop = stop if stop is not __NOTSET else size
            start = start if start is not __NOTSET else 0
            # Convert stop to a negative position.
            if stop > 0:
                stop = min(stop - size, 0)
            if stop <= -size:
                raise err  # List would be empty
            offset_end = -stop
            # Convert start to always be positive
            if start < 0:
                start = max(size + start, 0)
            if start >= size:
                raise err  # past end of list
            offset_begin = start

        if not isinstance(item, int):
            raise err
        cdef vector[int32_t].iterator end = std_libcpp.prev(deref(self._cpp_obj).end(), <int64_t>offset_end)
        cdef vector[int32_t].iterator loc = std_libcpp.find[vector[int32_t].iterator, int32_t](
            std_libcpp.next(deref(self._cpp_obj).begin(), <int64_t>offset_begin),
            end,
            item        )
        if loc != end:
            return <int64_t> std_libcpp.distance(deref(self._cpp_obj).begin(), loc)
        raise err

    def count(self, item):
        if not self or item is None:
            return 0
        if not isinstance(item, int):
            return 0
        return <int64_t> std_libcpp.count[vector[int32_t].iterator, int32_t](
            deref(self._cpp_obj).begin(), deref(self._cpp_obj).end(), item)

    def __reduce__(self):
        return (List__i32, (list(self), ))


Sequence.register(List__i32)

