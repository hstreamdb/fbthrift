/**
 * Autogenerated by Thrift
 *
 * DO NOT EDIT UNLESS YOU ARE SURE THAT YOU KNOW WHAT YOU ARE DOING
 *  @generated
 */

package test.fixtures.basic;

import com.facebook.swift.codec.*;
import com.facebook.swift.codec.ThriftField.Requiredness;
import com.facebook.swift.service.*;
import com.google.common.util.concurrent.ListenableFuture;
import java.io.*;
import java.util.*;

@SwiftGenerated
@ThriftService("MyServicePrioParent")
public interface MyServicePrioParent extends java.io.Closable {
    @ThriftService("MyServicePrioParent")
    public interface Async extends java.io.Closable {
        @Override void close();

        @ThriftMethod(value = "ping")
        ListenableFuture<Void> ping();

        @ThriftMethod(value = "pong")
        ListenableFuture<Void> pong();
    }
    @Override void close();

    @ThriftMethod(value = "ping")
    void ping() throws org.apache.thrift.TException;

    @ThriftMethod(value = "pong")
    void pong() throws org.apache.thrift.TException;
}
