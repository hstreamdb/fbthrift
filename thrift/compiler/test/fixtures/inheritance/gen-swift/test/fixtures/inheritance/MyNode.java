/**
 * Autogenerated by Thrift
 *
 * DO NOT EDIT UNLESS YOU ARE SURE THAT YOU KNOW WHAT YOU ARE DOING
 *  @generated
 */

package test.fixtures.inheritance;

import com.facebook.swift.codec.*;
import com.facebook.swift.codec.ThriftField.Requiredness;
import com.facebook.swift.service.*;
import com.google.common.util.concurrent.ListenableFuture;
import java.io.*;
import java.util.*;

@SwiftGenerated
@ThriftService("MyNode")
public interface MyNode extends java.io.Closable, test.fixtures.inheritance.MyRoot {
    @ThriftService("MyNode")
    public interface Async extends java.io.Closable, test.fixtures.inheritance.MyRoot.Async {
        @Override void close();

        @ThriftMethod(value = "do_mid")
        ListenableFuture<Void> doMid();
    }
    @Override void close();

    @ThriftMethod(value = "do_mid")
    void doMid() throws org.apache.thrift.TException;
}
