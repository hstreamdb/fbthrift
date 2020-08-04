// Autogenerated by Thrift Compiler (facebook)
// DO NOT EDIT UNLESS YOU ARE SURE THAT YOU KNOW WHAT YOU ARE DOING
// @generated

package module

import (
	"bytes"
	"context"
	"sync"
	"fmt"
	thrift "github.com/facebook/fbthrift/thrift/lib/go/thrift"
	include0 "include"

)

// (needed to ensure safety because of naive import list construction.)
var _ = thrift.ZERO
var _ = fmt.Printf
var _ = sync.Mutex{}
var _ = bytes.Equal
var _ = context.Background

var _ = include0.GoUnusedProtection__
type SomeService interface {
  // Parameters:
  //  - M
  BounceMap(m include0.SomeMap) (_r include0.SomeMap, err error)
  // Parameters:
  //  - R
  BinaryKeyedMap(r []int64) (_r map[string]int64, err error)
}

type SomeServiceClientInterface interface {
  thrift.ClientInterface
  // Parameters:
  //  - M
  BounceMap(m include0.SomeMap) (_r include0.SomeMap, err error)
  // Parameters:
  //  - R
  BinaryKeyedMap(r []int64) (_r map[string]int64, err error)
}

type SomeServiceClient struct {
  SomeServiceClientInterface
  CC thrift.ClientConn
}

func(client *SomeServiceClient) Open() error {
  return client.CC.Open()
}

func(client *SomeServiceClient) Close() error {
  return client.CC.Close()
}

func(client *SomeServiceClient) IsOpen() bool {
  return client.CC.IsOpen()
}

func NewSomeServiceClientFactory(t thrift.Transport, f thrift.ProtocolFactory) *SomeServiceClient {
  return &SomeServiceClient{ CC: thrift.NewClientConn(t, f) }
}

func NewSomeServiceClient(t thrift.Transport, iprot thrift.Protocol, oprot thrift.Protocol) *SomeServiceClient {
  return &SomeServiceClient{ CC: thrift.NewClientConnWithProtocols(t, iprot, oprot) }
}

// Parameters:
//  - M
func (p *SomeServiceClient) BounceMap(m include0.SomeMap) (_r include0.SomeMap, err error) {
  args := SomeServiceBounceMapArgs{
    M : m,
  }
  err = p.CC.SendMsg("bounce_map", &args, thrift.CALL)
  if err != nil { return }
  return p.recvBounceMap()
}


func (p *SomeServiceClient) recvBounceMap() (value include0.SomeMap, err error) {
  var result SomeServiceBounceMapResult
  err = p.CC.RecvMsg("bounce_map", &result)
  if err != nil { return }

  return result.GetSuccess(), nil
}

// Parameters:
//  - R
func (p *SomeServiceClient) BinaryKeyedMap(r []int64) (_r map[string]int64, err error) {
  args := SomeServiceBinaryKeyedMapArgs{
    R : r,
  }
  err = p.CC.SendMsg("binary_keyed_map", &args, thrift.CALL)
  if err != nil { return }
  return p.recvBinaryKeyedMap()
}


func (p *SomeServiceClient) recvBinaryKeyedMap() (value map[string]int64, err error) {
  var result SomeServiceBinaryKeyedMapResult
  err = p.CC.RecvMsg("binary_keyed_map", &result)
  if err != nil { return }

  return result.GetSuccess(), nil
}


type SomeServiceThreadsafeClient struct {
  SomeServiceClientInterface
  CC thrift.ClientConn
  Mu sync.Mutex
}

func(client *SomeServiceThreadsafeClient) Open() error {
  client.Mu.Lock()
  defer client.Mu.Unlock()
  return client.CC.Open()
}

func(client *SomeServiceThreadsafeClient) Close() error {
  client.Mu.Lock()
  defer client.Mu.Unlock()
  return client.CC.Close()
}

func(client *SomeServiceThreadsafeClient) IsOpen() bool {
  client.Mu.Lock()
  defer client.Mu.Unlock()
  return client.CC.IsOpen()
}

func NewSomeServiceThreadsafeClientFactory(t thrift.Transport, f thrift.ProtocolFactory) *SomeServiceThreadsafeClient {
  return &SomeServiceThreadsafeClient{ CC: thrift.NewClientConn(t, f) }
}

func NewSomeServiceThreadsafeClient(t thrift.Transport, iprot thrift.Protocol, oprot thrift.Protocol) *SomeServiceThreadsafeClient {
  return &SomeServiceThreadsafeClient{ CC: thrift.NewClientConnWithProtocols(t, iprot, oprot) }
}

// Parameters:
//  - M
func (p *SomeServiceThreadsafeClient) BounceMap(m include0.SomeMap) (_r include0.SomeMap, err error) {
  p.Mu.Lock()
  defer p.Mu.Unlock()
  args := SomeServiceBounceMapArgs{
    M : m,
  }
  err = p.CC.SendMsg("bounce_map", &args, thrift.CALL)
  if err != nil { return }
  return p.recvBounceMap()
}


func (p *SomeServiceThreadsafeClient) recvBounceMap() (value include0.SomeMap, err error) {
  var result SomeServiceBounceMapResult
  err = p.CC.RecvMsg("bounce_map", &result)
  if err != nil { return }

  return result.GetSuccess(), nil
}

// Parameters:
//  - R
func (p *SomeServiceThreadsafeClient) BinaryKeyedMap(r []int64) (_r map[string]int64, err error) {
  p.Mu.Lock()
  defer p.Mu.Unlock()
  args := SomeServiceBinaryKeyedMapArgs{
    R : r,
  }
  err = p.CC.SendMsg("binary_keyed_map", &args, thrift.CALL)
  if err != nil { return }
  return p.recvBinaryKeyedMap()
}


func (p *SomeServiceThreadsafeClient) recvBinaryKeyedMap() (value map[string]int64, err error) {
  var result SomeServiceBinaryKeyedMapResult
  err = p.CC.RecvMsg("binary_keyed_map", &result)
  if err != nil { return }

  return result.GetSuccess(), nil
}


type SomeServiceProcessor struct {
  processorMap map[string]thrift.ProcessorFunction
  handler SomeService
}

func (p *SomeServiceProcessor) AddToProcessorMap(key string, processor thrift.ProcessorFunction) {
  p.processorMap[key] = processor
}

func (p *SomeServiceProcessor) GetProcessorFunction(key string) (processor thrift.ProcessorFunction, err error) {
  if processor, ok := p.processorMap[key]; ok {
    return processor, nil
  }
  return nil, nil // generic error message will be sent
}

func (p *SomeServiceProcessor) ProcessorMap() map[string]thrift.ProcessorFunction {
  return p.processorMap
}

func NewSomeServiceProcessor(handler SomeService) *SomeServiceProcessor {
  self24 := &SomeServiceProcessor{handler:handler, processorMap:make(map[string]thrift.ProcessorFunction)}
  self24.processorMap["bounce_map"] = &someServiceProcessorBounceMap{handler:handler}
  self24.processorMap["binary_keyed_map"] = &someServiceProcessorBinaryKeyedMap{handler:handler}
  return self24
}

type someServiceProcessorBounceMap struct {
  handler SomeService
}

func (p *someServiceProcessorBounceMap) Read(iprot thrift.Protocol) (thrift.Struct, thrift.Exception) {
  args := SomeServiceBounceMapArgs{}
  if err := args.Read(iprot); err != nil {
    return nil, err
  }
  iprot.ReadMessageEnd()
  return &args, nil
}

func (p *someServiceProcessorBounceMap) Write(seqId int32, result thrift.WritableStruct, oprot thrift.Protocol) (err thrift.Exception) {
  var err2 error
  messageType := thrift.REPLY
  switch result.(type) {
  case thrift.ApplicationException:
    messageType = thrift.EXCEPTION
  }
  if err2 = oprot.WriteMessageBegin("bounce_map", messageType, seqId); err2 != nil {
    err = err2
  }
  if err2 = result.Write(oprot); err == nil && err2 != nil {
    err = err2
  }
  if err2 = oprot.WriteMessageEnd(); err == nil && err2 != nil {
    err = err2
  }
  if err2 = oprot.Flush(); err == nil && err2 != nil {
    err = err2
  }
  return err
}

func (p *someServiceProcessorBounceMap) Run(argStruct thrift.Struct) (thrift.WritableStruct, thrift.ApplicationException) {
  args := argStruct.(*SomeServiceBounceMapArgs)
  var result SomeServiceBounceMapResult
  if retval, err := p.handler.BounceMap(args.M); err != nil {
    switch err.(type) {
    default:
      x := thrift.NewApplicationException(thrift.INTERNAL_ERROR, "Internal error processing bounce_map: " + err.Error())
      return x, x
    }
  } else {
    result.Success = retval
  }
  return &result, nil
}

type someServiceProcessorBinaryKeyedMap struct {
  handler SomeService
}

func (p *someServiceProcessorBinaryKeyedMap) Read(iprot thrift.Protocol) (thrift.Struct, thrift.Exception) {
  args := SomeServiceBinaryKeyedMapArgs{}
  if err := args.Read(iprot); err != nil {
    return nil, err
  }
  iprot.ReadMessageEnd()
  return &args, nil
}

func (p *someServiceProcessorBinaryKeyedMap) Write(seqId int32, result thrift.WritableStruct, oprot thrift.Protocol) (err thrift.Exception) {
  var err2 error
  messageType := thrift.REPLY
  switch result.(type) {
  case thrift.ApplicationException:
    messageType = thrift.EXCEPTION
  }
  if err2 = oprot.WriteMessageBegin("binary_keyed_map", messageType, seqId); err2 != nil {
    err = err2
  }
  if err2 = result.Write(oprot); err == nil && err2 != nil {
    err = err2
  }
  if err2 = oprot.WriteMessageEnd(); err == nil && err2 != nil {
    err = err2
  }
  if err2 = oprot.Flush(); err == nil && err2 != nil {
    err = err2
  }
  return err
}

func (p *someServiceProcessorBinaryKeyedMap) Run(argStruct thrift.Struct) (thrift.WritableStruct, thrift.ApplicationException) {
  args := argStruct.(*SomeServiceBinaryKeyedMapArgs)
  var result SomeServiceBinaryKeyedMapResult
  if retval, err := p.handler.BinaryKeyedMap(args.R); err != nil {
    switch err.(type) {
    default:
      x := thrift.NewApplicationException(thrift.INTERNAL_ERROR, "Internal error processing binary_keyed_map: " + err.Error())
      return x, x
    }
  } else {
    result.Success = retval
  }
  return &result, nil
}


// HELPER FUNCTIONS AND STRUCTURES

// Attributes:
//  - M
type SomeServiceBounceMapArgs struct {
  thrift.IRequest
  M include0.SomeMap `thrift:"m,1" db:"m" json:"m"`
}

func NewSomeServiceBounceMapArgs() *SomeServiceBounceMapArgs {
  return &SomeServiceBounceMapArgs{}
}


func (p *SomeServiceBounceMapArgs) GetM() include0.SomeMap {
  return p.M
}
func (p *SomeServiceBounceMapArgs) Read(iprot thrift.Protocol) error {
  if _, err := iprot.ReadStructBegin(); err != nil {
    return thrift.PrependError(fmt.Sprintf("%T read error: ", p), err)
  }


  for {
    _, fieldTypeId, fieldId, err := iprot.ReadFieldBegin()
    if err != nil {
      return thrift.PrependError(fmt.Sprintf("%T field %d read error: ", p, fieldId), err)
    }
    if fieldTypeId == thrift.STOP { break; }
    switch fieldId {
    case 1:
      if err := p.ReadField1(iprot); err != nil {
        return err
      }
    default:
      if err := iprot.Skip(fieldTypeId); err != nil {
        return err
      }
    }
    if err := iprot.ReadFieldEnd(); err != nil {
      return err
    }
  }
  if err := iprot.ReadStructEnd(); err != nil {
    return thrift.PrependError(fmt.Sprintf("%T read struct end error: ", p), err)
  }
  return nil
}

func (p *SomeServiceBounceMapArgs)  ReadField1(iprot thrift.Protocol) error {
  _, _, size, err := iprot.ReadMapBegin()
  if err != nil {
    return thrift.PrependError("error reading map begin: ", err)
  }
  tMap := make(include0.SomeMap, size)
  p.M =  tMap
  for i := 0; i < size; i ++ {
var _key26 int32
    if v, err := iprot.ReadI32(); err != nil {
    return thrift.PrependError("error reading field 0: ", err)
} else {
    _key26 = v
}
var _val27 string
    if v, err := iprot.ReadString(); err != nil {
    return thrift.PrependError("error reading field 0: ", err)
} else {
    _val27 = v
}
    p.M[_key26] = _val27
  }
  if err := iprot.ReadMapEnd(); err != nil {
    return thrift.PrependError("error reading map end: ", err)
  }
  return nil
}

func (p *SomeServiceBounceMapArgs) Write(oprot thrift.Protocol) error {
  if err := oprot.WriteStructBegin("bounce_map_args"); err != nil {
    return thrift.PrependError(fmt.Sprintf("%T write struct begin error: ", p), err) }
  if err := p.writeField1(oprot); err != nil { return err }
  if err := oprot.WriteFieldStop(); err != nil {
    return thrift.PrependError("write field stop error: ", err) }
  if err := oprot.WriteStructEnd(); err != nil {
    return thrift.PrependError("write struct stop error: ", err) }
  return nil
}

func (p *SomeServiceBounceMapArgs) writeField1(oprot thrift.Protocol) (err error) {
  if err := oprot.WriteFieldBegin("m", thrift.MAP, 1); err != nil {
    return thrift.PrependError(fmt.Sprintf("%T write field begin error 1:m: ", p), err) }
  if err := oprot.WriteMapBegin(thrift.I32, thrift.STRING, len(p.M)); err != nil {
    return thrift.PrependError("error writing map begin: ", err)
  }
  for k, v := range p.M {
    if err := oprot.WriteI32(int32(k)); err != nil {
    return thrift.PrependError(fmt.Sprintf("%T. (0) field write error: ", p), err) }
    if err := oprot.WriteString(string(v)); err != nil {
    return thrift.PrependError(fmt.Sprintf("%T. (0) field write error: ", p), err) }
  }
  if err := oprot.WriteMapEnd(); err != nil {
    return thrift.PrependError("error writing map end: ", err)
  }
  if err := oprot.WriteFieldEnd(); err != nil {
    return thrift.PrependError(fmt.Sprintf("%T write field end error 1:m: ", p), err) }
  return err
}

func (p *SomeServiceBounceMapArgs) String() string {
  if p == nil {
    return "<nil>"
  }

  mVal := fmt.Sprintf("%v", p.M)
  return fmt.Sprintf("SomeServiceBounceMapArgs({M:%s})", mVal)
}

// Attributes:
//  - Success
type SomeServiceBounceMapResult struct {
  thrift.IResponse
  Success include0.SomeMap `thrift:"success,0" db:"success" json:"success,omitempty"`
}

func NewSomeServiceBounceMapResult() *SomeServiceBounceMapResult {
  return &SomeServiceBounceMapResult{}
}

var SomeServiceBounceMapResult_Success_DEFAULT include0.SomeMap

func (p *SomeServiceBounceMapResult) GetSuccess() include0.SomeMap {
  return p.Success
}
func (p *SomeServiceBounceMapResult) IsSetSuccess() bool {
  return p.Success != nil
}

func (p *SomeServiceBounceMapResult) Read(iprot thrift.Protocol) error {
  if _, err := iprot.ReadStructBegin(); err != nil {
    return thrift.PrependError(fmt.Sprintf("%T read error: ", p), err)
  }


  for {
    _, fieldTypeId, fieldId, err := iprot.ReadFieldBegin()
    if err != nil {
      return thrift.PrependError(fmt.Sprintf("%T field %d read error: ", p, fieldId), err)
    }
    if fieldTypeId == thrift.STOP { break; }
    switch fieldId {
    case 0:
      if err := p.ReadField0(iprot); err != nil {
        return err
      }
    default:
      if err := iprot.Skip(fieldTypeId); err != nil {
        return err
      }
    }
    if err := iprot.ReadFieldEnd(); err != nil {
      return err
    }
  }
  if err := iprot.ReadStructEnd(); err != nil {
    return thrift.PrependError(fmt.Sprintf("%T read struct end error: ", p), err)
  }
  return nil
}

func (p *SomeServiceBounceMapResult)  ReadField0(iprot thrift.Protocol) error {
  _, _, size, err := iprot.ReadMapBegin()
  if err != nil {
    return thrift.PrependError("error reading map begin: ", err)
  }
  tMap := make(include0.SomeMap, size)
  p.Success =  tMap
  for i := 0; i < size; i ++ {
var _key28 int32
    if v, err := iprot.ReadI32(); err != nil {
    return thrift.PrependError("error reading field 0: ", err)
} else {
    _key28 = v
}
var _val29 string
    if v, err := iprot.ReadString(); err != nil {
    return thrift.PrependError("error reading field 0: ", err)
} else {
    _val29 = v
}
    p.Success[_key28] = _val29
  }
  if err := iprot.ReadMapEnd(); err != nil {
    return thrift.PrependError("error reading map end: ", err)
  }
  return nil
}

func (p *SomeServiceBounceMapResult) Write(oprot thrift.Protocol) error {
  if err := oprot.WriteStructBegin("bounce_map_result"); err != nil {
    return thrift.PrependError(fmt.Sprintf("%T write struct begin error: ", p), err) }
  if err := p.writeField0(oprot); err != nil { return err }
  if err := oprot.WriteFieldStop(); err != nil {
    return thrift.PrependError("write field stop error: ", err) }
  if err := oprot.WriteStructEnd(); err != nil {
    return thrift.PrependError("write struct stop error: ", err) }
  return nil
}

func (p *SomeServiceBounceMapResult) writeField0(oprot thrift.Protocol) (err error) {
  if p.IsSetSuccess() {
    if err := oprot.WriteFieldBegin("success", thrift.MAP, 0); err != nil {
      return thrift.PrependError(fmt.Sprintf("%T write field begin error 0:success: ", p), err) }
    if err := oprot.WriteMapBegin(thrift.I32, thrift.STRING, len(p.Success)); err != nil {
      return thrift.PrependError("error writing map begin: ", err)
    }
    for k, v := range p.Success {
      if err := oprot.WriteI32(int32(k)); err != nil {
      return thrift.PrependError(fmt.Sprintf("%T. (0) field write error: ", p), err) }
      if err := oprot.WriteString(string(v)); err != nil {
      return thrift.PrependError(fmt.Sprintf("%T. (0) field write error: ", p), err) }
    }
    if err := oprot.WriteMapEnd(); err != nil {
      return thrift.PrependError("error writing map end: ", err)
    }
    if err := oprot.WriteFieldEnd(); err != nil {
      return thrift.PrependError(fmt.Sprintf("%T write field end error 0:success: ", p), err) }
  }
  return err
}

func (p *SomeServiceBounceMapResult) String() string {
  if p == nil {
    return "<nil>"
  }

  successVal := fmt.Sprintf("%v", p.Success)
  return fmt.Sprintf("SomeServiceBounceMapResult({Success:%s})", successVal)
}

// Attributes:
//  - R
type SomeServiceBinaryKeyedMapArgs struct {
  thrift.IRequest
  R []int64 `thrift:"r,1" db:"r" json:"r"`
}

func NewSomeServiceBinaryKeyedMapArgs() *SomeServiceBinaryKeyedMapArgs {
  return &SomeServiceBinaryKeyedMapArgs{}
}


func (p *SomeServiceBinaryKeyedMapArgs) GetR() []int64 {
  return p.R
}
func (p *SomeServiceBinaryKeyedMapArgs) Read(iprot thrift.Protocol) error {
  if _, err := iprot.ReadStructBegin(); err != nil {
    return thrift.PrependError(fmt.Sprintf("%T read error: ", p), err)
  }


  for {
    _, fieldTypeId, fieldId, err := iprot.ReadFieldBegin()
    if err != nil {
      return thrift.PrependError(fmt.Sprintf("%T field %d read error: ", p, fieldId), err)
    }
    if fieldTypeId == thrift.STOP { break; }
    switch fieldId {
    case 1:
      if err := p.ReadField1(iprot); err != nil {
        return err
      }
    default:
      if err := iprot.Skip(fieldTypeId); err != nil {
        return err
      }
    }
    if err := iprot.ReadFieldEnd(); err != nil {
      return err
    }
  }
  if err := iprot.ReadStructEnd(); err != nil {
    return thrift.PrependError(fmt.Sprintf("%T read struct end error: ", p), err)
  }
  return nil
}

func (p *SomeServiceBinaryKeyedMapArgs)  ReadField1(iprot thrift.Protocol) error {
  _, size, err := iprot.ReadListBegin()
  if err != nil {
    return thrift.PrependError("error reading list begin: ", err)
  }
  tSlice := make([]int64, 0, size)
  p.R =  tSlice
  for i := 0; i < size; i ++ {
var _elem30 int64
    if v, err := iprot.ReadI64(); err != nil {
    return thrift.PrependError("error reading field 0: ", err)
} else {
    _elem30 = v
}
    p.R = append(p.R, _elem30)
  }
  if err := iprot.ReadListEnd(); err != nil {
    return thrift.PrependError("error reading list end: ", err)
  }
  return nil
}

func (p *SomeServiceBinaryKeyedMapArgs) Write(oprot thrift.Protocol) error {
  if err := oprot.WriteStructBegin("binary_keyed_map_args"); err != nil {
    return thrift.PrependError(fmt.Sprintf("%T write struct begin error: ", p), err) }
  if err := p.writeField1(oprot); err != nil { return err }
  if err := oprot.WriteFieldStop(); err != nil {
    return thrift.PrependError("write field stop error: ", err) }
  if err := oprot.WriteStructEnd(); err != nil {
    return thrift.PrependError("write struct stop error: ", err) }
  return nil
}

func (p *SomeServiceBinaryKeyedMapArgs) writeField1(oprot thrift.Protocol) (err error) {
  if err := oprot.WriteFieldBegin("r", thrift.LIST, 1); err != nil {
    return thrift.PrependError(fmt.Sprintf("%T write field begin error 1:r: ", p), err) }
  if err := oprot.WriteListBegin(thrift.I64, len(p.R)); err != nil {
    return thrift.PrependError("error writing list begin: ", err)
  }
  for _, v := range p.R {
    if err := oprot.WriteI64(int64(v)); err != nil {
    return thrift.PrependError(fmt.Sprintf("%T. (0) field write error: ", p), err) }
  }
  if err := oprot.WriteListEnd(); err != nil {
    return thrift.PrependError("error writing list end: ", err)
  }
  if err := oprot.WriteFieldEnd(); err != nil {
    return thrift.PrependError(fmt.Sprintf("%T write field end error 1:r: ", p), err) }
  return err
}

func (p *SomeServiceBinaryKeyedMapArgs) String() string {
  if p == nil {
    return "<nil>"
  }

  rVal := fmt.Sprintf("%v", p.R)
  return fmt.Sprintf("SomeServiceBinaryKeyedMapArgs({R:%s})", rVal)
}

// Attributes:
//  - Success
type SomeServiceBinaryKeyedMapResult struct {
  thrift.IResponse
  Success map[string]int64 `thrift:"success,0" db:"success" json:"success,omitempty"`
}

func NewSomeServiceBinaryKeyedMapResult() *SomeServiceBinaryKeyedMapResult {
  return &SomeServiceBinaryKeyedMapResult{}
}

var SomeServiceBinaryKeyedMapResult_Success_DEFAULT map[string]int64

func (p *SomeServiceBinaryKeyedMapResult) GetSuccess() map[string]int64 {
  return p.Success
}
func (p *SomeServiceBinaryKeyedMapResult) IsSetSuccess() bool {
  return p.Success != nil
}

func (p *SomeServiceBinaryKeyedMapResult) Read(iprot thrift.Protocol) error {
  if _, err := iprot.ReadStructBegin(); err != nil {
    return thrift.PrependError(fmt.Sprintf("%T read error: ", p), err)
  }


  for {
    _, fieldTypeId, fieldId, err := iprot.ReadFieldBegin()
    if err != nil {
      return thrift.PrependError(fmt.Sprintf("%T field %d read error: ", p, fieldId), err)
    }
    if fieldTypeId == thrift.STOP { break; }
    switch fieldId {
    case 0:
      if err := p.ReadField0(iprot); err != nil {
        return err
      }
    default:
      if err := iprot.Skip(fieldTypeId); err != nil {
        return err
      }
    }
    if err := iprot.ReadFieldEnd(); err != nil {
      return err
    }
  }
  if err := iprot.ReadStructEnd(); err != nil {
    return thrift.PrependError(fmt.Sprintf("%T read struct end error: ", p), err)
  }
  return nil
}

func (p *SomeServiceBinaryKeyedMapResult)  ReadField0(iprot thrift.Protocol) error {
  _, _, size, err := iprot.ReadMapBegin()
  if err != nil {
    return thrift.PrependError("error reading map begin: ", err)
  }
  tMap := make(map[string]int64, size)
  p.Success =  tMap
  for i := 0; i < size; i ++ {
var _key31 string
    if v, err := iprot.ReadString(); err != nil {
    return thrift.PrependError("error reading field 0: ", err)
} else {
    _key31 = v
}
var _val32 int64
    if v, err := iprot.ReadI64(); err != nil {
    return thrift.PrependError("error reading field 0: ", err)
} else {
    _val32 = v
}
    p.Success[_key31] = _val32
  }
  if err := iprot.ReadMapEnd(); err != nil {
    return thrift.PrependError("error reading map end: ", err)
  }
  return nil
}

func (p *SomeServiceBinaryKeyedMapResult) Write(oprot thrift.Protocol) error {
  if err := oprot.WriteStructBegin("binary_keyed_map_result"); err != nil {
    return thrift.PrependError(fmt.Sprintf("%T write struct begin error: ", p), err) }
  if err := p.writeField0(oprot); err != nil { return err }
  if err := oprot.WriteFieldStop(); err != nil {
    return thrift.PrependError("write field stop error: ", err) }
  if err := oprot.WriteStructEnd(); err != nil {
    return thrift.PrependError("write struct stop error: ", err) }
  return nil
}

func (p *SomeServiceBinaryKeyedMapResult) writeField0(oprot thrift.Protocol) (err error) {
  if p.IsSetSuccess() {
    if err := oprot.WriteFieldBegin("success", thrift.MAP, 0); err != nil {
      return thrift.PrependError(fmt.Sprintf("%T write field begin error 0:success: ", p), err) }
    if err := oprot.WriteMapBegin(thrift.STRING, thrift.I64, len(p.Success)); err != nil {
      return thrift.PrependError("error writing map begin: ", err)
    }
    for k, v := range p.Success {
      if err := oprot.WriteString(string(k)); err != nil {
      return thrift.PrependError(fmt.Sprintf("%T. (0) field write error: ", p), err) }
      if err := oprot.WriteI64(int64(v)); err != nil {
      return thrift.PrependError(fmt.Sprintf("%T. (0) field write error: ", p), err) }
    }
    if err := oprot.WriteMapEnd(); err != nil {
      return thrift.PrependError("error writing map end: ", err)
    }
    if err := oprot.WriteFieldEnd(); err != nil {
      return thrift.PrependError(fmt.Sprintf("%T write field end error 0:success: ", p), err) }
  }
  return err
}

func (p *SomeServiceBinaryKeyedMapResult) String() string {
  if p == nil {
    return "<nil>"
  }

  successVal := fmt.Sprintf("%v", p.Success)
  return fmt.Sprintf("SomeServiceBinaryKeyedMapResult({Success:%s})", successVal)
}


