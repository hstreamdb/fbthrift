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


class OldStructure(thrift.py3.types.Struct, _typing.Hashable, _typing.Iterable[_typing.Tuple[str, _typing.Any]]):
    def __init__(
        self, *,
        features: _typing.Optional[_typing.Mapping[int, float]]=None
    ) -> None: ...

    def __call__(
        self, *,
        features: _typing.Union[_typing.Mapping[int, float], NOTSETTYPE, None]=NOTSET
    ) -> OldStructure: ...

    def __reduce__(self) -> _typing.Tuple[_typing.Callable, _typing.Tuple[_typing.Type['OldStructure'], bytes]]: ...
    def __iter__(self) -> _typing.Iterator[_typing.Tuple[str, _typing.Any]]: ...
    def __bool__(self) -> bool: ...
    def __hash__(self) -> int: ...
    def __repr__(self) -> str: ...
    def __lt__(self, other: 'OldStructure') -> bool: ...
    def __gt__(self, other: 'OldStructure') -> bool: ...
    def __le__(self, other: 'OldStructure') -> bool: ...
    def __ge__(self, other: 'OldStructure') -> bool: ...

    @property
    def features(self) -> _typing.Mapping[int, float]: ...


class NewStructure(thrift.py3.types.Struct, _typing.Hashable, _typing.Iterable[_typing.Tuple[str, _typing.Any]]):
    def __init__(
        self, *,
        features: _typing.Optional[_typing.Mapping[int, float]]=None
    ) -> None: ...

    def __call__(
        self, *,
        features: _typing.Union[_typing.Mapping[int, float], NOTSETTYPE, None]=NOTSET
    ) -> NewStructure: ...

    def __reduce__(self) -> _typing.Tuple[_typing.Callable, _typing.Tuple[_typing.Type['NewStructure'], bytes]]: ...
    def __iter__(self) -> _typing.Iterator[_typing.Tuple[str, _typing.Any]]: ...
    def __bool__(self) -> bool: ...
    def __hash__(self) -> int: ...
    def __repr__(self) -> str: ...
    def __lt__(self, other: 'NewStructure') -> bool: ...
    def __gt__(self, other: 'NewStructure') -> bool: ...
    def __le__(self, other: 'NewStructure') -> bool: ...
    def __ge__(self, other: 'NewStructure') -> bool: ...

    @property
    def features(self) -> _typing.Mapping[int, float]: ...


class NewStructure2(thrift.py3.types.Struct, _typing.Hashable, _typing.Iterable[_typing.Tuple[str, _typing.Any]]):
    def __init__(
        self, *,
        features: _typing.Optional[_typing.Mapping[int, float]]=None
    ) -> None: ...

    def __call__(
        self, *,
        features: _typing.Union[_typing.Mapping[int, float], NOTSETTYPE, None]=NOTSET
    ) -> NewStructure2: ...

    def __reduce__(self) -> _typing.Tuple[_typing.Callable, _typing.Tuple[_typing.Type['NewStructure2'], bytes]]: ...
    def __iter__(self) -> _typing.Iterator[_typing.Tuple[str, _typing.Any]]: ...
    def __bool__(self) -> bool: ...
    def __hash__(self) -> int: ...
    def __repr__(self) -> str: ...

    @property
    def features(self) -> _typing.Mapping[int, float]: ...


class NewStructureNested(thrift.py3.types.Struct, _typing.Hashable, _typing.Iterable[_typing.Tuple[str, _typing.Any]]):
    def __init__(
        self, *,
        lst: _typing.Optional[_typing.Sequence[_typing.Mapping[int, float]]]=None,
        mp: _typing.Optional[_typing.Mapping[int, _typing.Mapping[int, float]]]=None,
        s: _typing.Optional[_typing.AbstractSet[_typing.Mapping[int, float]]]=None
    ) -> None: ...

    def __call__(
        self, *,
        lst: _typing.Union[_typing.Sequence[_typing.Mapping[int, float]], NOTSETTYPE, None]=NOTSET,
        mp: _typing.Union[_typing.Mapping[int, _typing.Mapping[int, float]], NOTSETTYPE, None]=NOTSET,
        s: _typing.Union[_typing.AbstractSet[_typing.Mapping[int, float]], NOTSETTYPE, None]=NOTSET
    ) -> NewStructureNested: ...

    def __reduce__(self) -> _typing.Tuple[_typing.Callable, _typing.Tuple[_typing.Type['NewStructureNested'], bytes]]: ...
    def __iter__(self) -> _typing.Iterator[_typing.Tuple[str, _typing.Any]]: ...
    def __bool__(self) -> bool: ...
    def __hash__(self) -> int: ...
    def __repr__(self) -> str: ...

    @property
    def lst(self) -> _typing.Sequence[_typing.Mapping[int, float]]: ...
    @property
    def mp(self) -> _typing.Mapping[int, _typing.Mapping[int, float]]: ...
    @property
    def s(self) -> _typing.AbstractSet[_typing.Mapping[int, float]]: ...


class NewStructureNestedField(thrift.py3.types.Struct, _typing.Hashable, _typing.Iterable[_typing.Tuple[str, _typing.Any]]):
    def __init__(
        self, *,
        f: _typing.Optional['NewStructureNested']=None
    ) -> None: ...

    def __call__(
        self, *,
        f: _typing.Union['NewStructureNested', NOTSETTYPE, None]=NOTSET
    ) -> NewStructureNestedField: ...

    def __reduce__(self) -> _typing.Tuple[_typing.Callable, _typing.Tuple[_typing.Type['NewStructureNestedField'], bytes]]: ...
    def __iter__(self) -> _typing.Iterator[_typing.Tuple[str, _typing.Any]]: ...
    def __bool__(self) -> bool: ...
    def __hash__(self) -> int: ...
    def __repr__(self) -> str: ...

    @property
    def f(self) -> 'NewStructureNested': ...


class Map__i16_double(_typing.Mapping[int, float], _typing.Hashable):
    def __init__(self, items: _typing.Mapping[int, float]=None) -> None: ...
    def __repr__(self) -> str: ...
    def __len__(self) -> int: ...
    def __hash__(self) -> int: ...
    def __contains__(self, x: object) -> bool: ...
    def __copy__(self) -> _typing.Mapping[int, float]: ...
    def __getitem__(self, key: int) -> float: ...
    def __iter__(self) -> _typing.Iterator[int]: ...


class Map__i16_float(_typing.Mapping[int, float], _typing.Hashable):
    def __init__(self, items: _typing.Mapping[int, float]=None) -> None: ...
    def __repr__(self) -> str: ...
    def __len__(self) -> int: ...
    def __hash__(self) -> int: ...
    def __contains__(self, x: object) -> bool: ...
    def __copy__(self) -> _typing.Mapping[int, float]: ...
    def __getitem__(self, key: int) -> float: ...
    def __iter__(self) -> _typing.Iterator[int]: ...


_List__Map__i16_floatT = _typing.TypeVar('_List__Map__i16_floatT', bound=_typing.Sequence[_typing.Mapping[int, float]])


class List__Map__i16_float(_typing.Sequence[_typing.Mapping[int, float]], _typing.Hashable):
    def __init__(self, items: _typing.Sequence[_typing.Mapping[int, float]]=None) -> None: ...
    def __repr__(self) -> str: ...
    def __len__(self) -> int: ...
    def __hash__(self) -> int: ...
    def __contains__(self, x: object) -> bool: ...
    def __copy__(self) -> _typing.Sequence[_typing.Mapping[int, float]]: ...
    @_typing.overload
    def __getitem__(self, i: int) -> _typing.Mapping[int, float]: ...
    @_typing.overload
    def __getitem__(self, s: slice) -> _typing.Sequence[_typing.Mapping[int, float]]: ...
    def count(self, item: _typing.Any) -> int: ...
    def index(self, item: _typing.Any, start: int = ..., stop: int = ...) -> int: ...
    def __add__(self, other: _typing.Sequence[_typing.Mapping[int, float]]) -> 'List__Map__i16_float': ...
    def __radd__(self, other: _List__Map__i16_floatT) -> _List__Map__i16_floatT: ...
    def __reversed__(self) -> _typing.Iterator[_typing.Mapping[int, float]]: ...
    def __iter__(self) -> _typing.Iterator[_typing.Mapping[int, float]]: ...


class Map__i16_Map__i16_float(_typing.Mapping[int, _typing.Mapping[int, float]], _typing.Hashable):
    def __init__(self, items: _typing.Mapping[int, _typing.Mapping[int, float]]=None) -> None: ...
    def __repr__(self) -> str: ...
    def __len__(self) -> int: ...
    def __hash__(self) -> int: ...
    def __contains__(self, x: object) -> bool: ...
    def __copy__(self) -> _typing.Mapping[int, _typing.Mapping[int, float]]: ...
    def __getitem__(self, key: int) -> _typing.Mapping[int, float]: ...
    def __iter__(self) -> _typing.Iterator[int]: ...


class Set__Map__i16_float(_typing.AbstractSet[_typing.Mapping[int, float]], _typing.Hashable):
    def __init__(self, items: _typing.AbstractSet[_typing.Mapping[int, float]]=None) -> None: ...
    def __repr__(self) -> str: ...
    def __len__(self) -> int: ...
    def __hash__(self) -> int: ...
    def __contains__(self, x: object) -> bool: ...
    def __copy__(self) -> _typing.AbstractSet[_typing.Mapping[int, float]]: ...
    def isdisjoint(self, other: _typing.AbstractSet[_typing.Mapping[int, float]]) -> bool: ...
    def union(self, other: _typing.AbstractSet[_typing.Mapping[int, float]]) -> 'Set__Map__i16_float': ...
    def intersection(self, other: _typing.AbstractSet[_typing.Mapping[int, float]]) -> 'Set__Map__i16_float': ...
    def difference(self, other: _typing.AbstractSet[_typing.Mapping[int, float]]) -> 'Set__Map__i16_float': ...
    def symmetric_difference(self, other: _typing.AbstractSet[_typing.Mapping[int, float]]) -> 'Set__Map__i16_float': ...
    def issubset(self, other: _typing.AbstractSet[_typing.Mapping[int, float]]) -> bool: ...
    def issuperset(self, other: _typing.AbstractSet[_typing.Mapping[int, float]]) -> bool: ...
    def __iter__(self) -> _typing.Iterator[_typing.Mapping[int, float]]: ...


class Map__i64_double(_typing.Mapping[int, float], _typing.Hashable):
    def __init__(self, items: _typing.Mapping[int, float]=None) -> None: ...
    def __repr__(self) -> str: ...
    def __len__(self) -> int: ...
    def __hash__(self) -> int: ...
    def __contains__(self, x: object) -> bool: ...
    def __copy__(self) -> _typing.Mapping[int, float]: ...
    def __getitem__(self, key: int) -> float: ...
    def __iter__(self) -> _typing.Iterator[int]: ...


class Map__i16_Map__i64_double(_typing.Mapping[int, _typing.Mapping[int, float]], _typing.Hashable):
    def __init__(self, items: _typing.Mapping[int, _typing.Mapping[int, float]]=None) -> None: ...
    def __repr__(self) -> str: ...
    def __len__(self) -> int: ...
    def __hash__(self) -> int: ...
    def __contains__(self, x: object) -> bool: ...
    def __copy__(self) -> _typing.Mapping[int, _typing.Mapping[int, float]]: ...
    def __getitem__(self, key: int) -> _typing.Mapping[int, float]: ...
    def __iter__(self) -> _typing.Iterator[int]: ...


class Map__i32_Map__i64_double(_typing.Mapping[int, _typing.Mapping[int, float]], _typing.Hashable):
    def __init__(self, items: _typing.Mapping[int, _typing.Mapping[int, float]]=None) -> None: ...
    def __repr__(self) -> str: ...
    def __len__(self) -> int: ...
    def __hash__(self) -> int: ...
    def __contains__(self, x: object) -> bool: ...
    def __copy__(self) -> _typing.Mapping[int, _typing.Mapping[int, float]]: ...
    def __getitem__(self, key: int) -> _typing.Mapping[int, float]: ...
    def __iter__(self) -> _typing.Iterator[int]: ...


_List__floatT = _typing.TypeVar('_List__floatT', bound=_typing.Sequence[float])


class List__float(_typing.Sequence[float], _typing.Hashable):
    def __init__(self, items: _typing.Sequence[float]=None) -> None: ...
    def __repr__(self) -> str: ...
    def __len__(self) -> int: ...
    def __hash__(self) -> int: ...
    def __contains__(self, x: object) -> bool: ...
    def __copy__(self) -> _typing.Sequence[float]: ...
    @_typing.overload
    def __getitem__(self, i: int) -> float: ...
    @_typing.overload
    def __getitem__(self, s: slice) -> _typing.Sequence[float]: ...
    def count(self, item: _typing.Any) -> int: ...
    def index(self, item: _typing.Any, start: int = ..., stop: int = ...) -> int: ...
    def __add__(self, other: _typing.Sequence[float]) -> 'List__float': ...
    def __radd__(self, other: _List__floatT) -> _List__floatT: ...
    def __reversed__(self) -> _typing.Iterator[float]: ...
    def __iter__(self) -> _typing.Iterator[float]: ...


class Map__i16_List__float(_typing.Mapping[int, _typing.Sequence[float]], _typing.Hashable):
    def __init__(self, items: _typing.Mapping[int, _typing.Sequence[float]]=None) -> None: ...
    def __repr__(self) -> str: ...
    def __len__(self) -> int: ...
    def __hash__(self) -> int: ...
    def __contains__(self, x: object) -> bool: ...
    def __copy__(self) -> _typing.Mapping[int, _typing.Sequence[float]]: ...
    def __getitem__(self, key: int) -> _typing.Sequence[float]: ...
    def __iter__(self) -> _typing.Iterator[int]: ...


class Map__i32_List__float(_typing.Mapping[int, _typing.Sequence[float]], _typing.Hashable):
    def __init__(self, items: _typing.Mapping[int, _typing.Sequence[float]]=None) -> None: ...
    def __repr__(self) -> str: ...
    def __len__(self) -> int: ...
    def __hash__(self) -> int: ...
    def __contains__(self, x: object) -> bool: ...
    def __copy__(self) -> _typing.Mapping[int, _typing.Sequence[float]]: ...
    def __getitem__(self, key: int) -> _typing.Sequence[float]: ...
    def __iter__(self) -> _typing.Iterator[int]: ...


FloatFeatures = Map__i16_float
DoubleMapType = Map__i64_double
OldMapMap = Map__i16_Map__i64_double
NewMapMap = Map__i32_Map__i64_double
OldMapList = Map__i16_List__float
NewMapList = Map__i32_List__float
