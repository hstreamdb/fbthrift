#
# Autogenerated by Thrift
#
# DO NOT EDIT UNLESS YOU ARE SURE THAT YOU KNOW WHAT YOU ARE DOING
#  @generated
#

from folly.iobuf import IOBuf as __IOBuf
import thrift.py3.types
import thrift.py3.exceptions
from thrift.py3.types import NOTSET, NOTSETTYPE
from thrift.py3.serializer import Protocol
import typing as _typing

import sys
import itertools
import includes.types as _includes_types


class MyStruct(thrift.py3.types.Struct, _typing.Hashable, _typing.Iterable[_typing.Tuple[str, _typing.Any]]):
    def __init__(
        self, *,
        MyIncludedField: _typing.Optional[_includes_types.Included]=None,
        MyOtherIncludedField: _typing.Optional[_includes_types.Included]=None,
        MyIncludedInt: _typing.Optional[int]=None
    ) -> None: ...

    def __call__(
        self, *,
        MyIncludedField: _typing.Union[_includes_types.Included, NOTSETTYPE, None]=NOTSET,
        MyOtherIncludedField: _typing.Union[_includes_types.Included, NOTSETTYPE, None]=NOTSET,
        MyIncludedInt: _typing.Union[int, NOTSETTYPE, None]=NOTSET
    ) -> MyStruct: ...

    def __reduce__(self) -> _typing.Tuple[_typing.Callable, _typing.Tuple[_typing.Type['MyStruct'], bytes]]: ...
    def __iter__(self) -> _typing.Iterator[_typing.Tuple[str, _typing.Any]]: ...
    def __bool__(self) -> bool: ...
    def __hash__(self) -> int: ...
    def __repr__(self) -> str: ...

    @property
    def MyIncludedField(self) -> _includes_types.Included: ...
    @property
    def MyOtherIncludedField(self) -> _includes_types.Included: ...
    @property
    def MyIncludedInt(self) -> int: ...


