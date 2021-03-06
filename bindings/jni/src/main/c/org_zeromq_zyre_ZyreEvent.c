/*
################################################################################
#  THIS FILE IS 100% GENERATED BY ZPROJECT; DO NOT EDIT EXCEPT EXPERIMENTALLY  #
#  Read the zproject/README.md for information about making permanent changes. #
################################################################################
*/
#include <stdio.h>
#include <stdlib.h>
#include <jni.h>
#include "zyre.h"
#include "org_zeromq_zyre_ZyreEvent.h"

JNIEXPORT jlong JNICALL
Java_org_zeromq_zyre_ZyreEvent__1_1new (JNIEnv *env, jclass c, jlong node)
{
    //  Disable CZMQ signal handling; allow Java to deal with it
    zsys_handler_set (NULL);
    jlong new_ = (jlong) (intptr_t) zyre_event_new ((zyre_t *) (intptr_t) node);
    return new_;
}

JNIEXPORT void JNICALL
Java_org_zeromq_zyre_ZyreEvent__1_1destroy (JNIEnv *env, jclass c, jlong self)
{
    zyre_event_destroy ((zyre_event_t **) &self);
}

JNIEXPORT jstring JNICALL
Java_org_zeromq_zyre_ZyreEvent__1_1type (JNIEnv *env, jclass c, jlong self)
{
    char *type_ = (char *) zyre_event_type ((zyre_event_t *) (intptr_t) self);
    jstring return_string_ = (*env)->NewStringUTF (env, type_);
    return return_string_;
}

JNIEXPORT jstring JNICALL
Java_org_zeromq_zyre_ZyreEvent__1_1peerUuid (JNIEnv *env, jclass c, jlong self)
{
    char *peer_uuid_ = (char *) zyre_event_peer_uuid ((zyre_event_t *) (intptr_t) self);
    jstring return_string_ = (*env)->NewStringUTF (env, peer_uuid_);
    return return_string_;
}

JNIEXPORT jstring JNICALL
Java_org_zeromq_zyre_ZyreEvent__1_1peerName (JNIEnv *env, jclass c, jlong self)
{
    char *peer_name_ = (char *) zyre_event_peer_name ((zyre_event_t *) (intptr_t) self);
    jstring return_string_ = (*env)->NewStringUTF (env, peer_name_);
    return return_string_;
}

JNIEXPORT jstring JNICALL
Java_org_zeromq_zyre_ZyreEvent__1_1peerAddr (JNIEnv *env, jclass c, jlong self)
{
    char *peer_addr_ = (char *) zyre_event_peer_addr ((zyre_event_t *) (intptr_t) self);
    jstring return_string_ = (*env)->NewStringUTF (env, peer_addr_);
    return return_string_;
}

JNIEXPORT jlong JNICALL
Java_org_zeromq_zyre_ZyreEvent__1_1headers (JNIEnv *env, jclass c, jlong self)
{
    jlong headers_ = (jlong) (intptr_t) zyre_event_headers ((zyre_event_t *) (intptr_t) self);
    return headers_;
}

JNIEXPORT jstring JNICALL
Java_org_zeromq_zyre_ZyreEvent__1_1header (JNIEnv *env, jclass c, jlong self, jstring name)
{
    char *name_ = (char *) (*env)->GetStringUTFChars (env, name, NULL);
    char *header_ = (char *) zyre_event_header ((zyre_event_t *) (intptr_t) self, name_);
    jstring return_string_ = (*env)->NewStringUTF (env, header_);
    (*env)->ReleaseStringUTFChars (env, name, name_);
    return return_string_;
}

JNIEXPORT jstring JNICALL
Java_org_zeromq_zyre_ZyreEvent__1_1group (JNIEnv *env, jclass c, jlong self)
{
    char *group_ = (char *) zyre_event_group ((zyre_event_t *) (intptr_t) self);
    jstring return_string_ = (*env)->NewStringUTF (env, group_);
    return return_string_;
}

JNIEXPORT jlong JNICALL
Java_org_zeromq_zyre_ZyreEvent__1_1msg (JNIEnv *env, jclass c, jlong self)
{
    jlong msg_ = (jlong) (intptr_t) zyre_event_msg ((zyre_event_t *) (intptr_t) self);
    return msg_;
}

JNIEXPORT jlong JNICALL
Java_org_zeromq_zyre_ZyreEvent__1_1getMsg (JNIEnv *env, jclass c, jlong self)
{
    jlong get_msg_ = (jlong) (intptr_t) zyre_event_get_msg ((zyre_event_t *) (intptr_t) self);
    return get_msg_;
}

JNIEXPORT void JNICALL
Java_org_zeromq_zyre_ZyreEvent__1_1print (JNIEnv *env, jclass c, jlong self)
{
    zyre_event_print ((zyre_event_t *) (intptr_t) self);
}

JNIEXPORT void JNICALL
Java_org_zeromq_zyre_ZyreEvent__1_1test (JNIEnv *env, jclass c, jboolean verbose)
{
    zyre_event_test ((bool) verbose);
}

