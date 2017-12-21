//
//  Copyright (c) 2017 Open Whisper Systems. All rights reserved.
//

NS_ASSUME_NONNULL_BEGIN

@interface OWSAnalyticsEvents : NSObject

- (instancetype)init NS_UNAVAILABLE;

// The code between these markers is code-generated by:
// SignalServiceKit/Utilities/extract_analytics_event_names.py
// To add an event, insert your logging event as a string e.g.:
//
//     OWSProdFail(@"messageSenderErrorMissingNewPreKeyBundle");
//
// Then run SignalServiceKit/Utilities/extract_analytics_event_names.py, which
// will extract the string into a named method in this class.
#pragma mark - Code Generation Marker

+ (NSString *)accountsErrorRegisterPushTokensFailed;

+ (NSString *)accountsErrorUnregisterAccountRequestFailed;

+ (NSString *)accountsErrorVerificationCodeRequestFailed;

+ (NSString *)accountsErrorVerifyAccountRequestFailed;

+ (NSString *)appDelegateErrorFailedToRegisterForRemoteNotifications;

+ (NSString *)appLaunch;

+ (NSString *)appLaunchComplete;

+ (NSString *)callServiceCallAlreadySet;

+ (NSString *)callServiceCallIdMismatch;

+ (NSString *)callServiceCallMismatch;

+ (NSString *)callServiceCallMissing;

+ (NSString *)callServiceCallUnexpectedlyIdle;

+ (NSString *)callServiceCallViewCouldNotPresent;

+ (NSString *)callServiceCouldNotCreatePeerConnectionClientPromise;

+ (NSString *)callServiceCouldNotCreateReadyToSendIceUpdatesPromise;

+ (NSString *)callServiceErrorHandleLocalAddedIceCandidate;

+ (NSString *)callServiceErrorHandleLocalHungupCall;

+ (NSString *)callServiceErrorHandleReceivedErrorExternal;

+ (NSString *)callServiceErrorHandleReceivedErrorInternal;

+ (NSString *)callServiceErrorHandleRemoteAddedIceCandidate;

+ (NSString *)callServiceErrorIncomingConnectionFailedExternal;

+ (NSString *)callServiceErrorIncomingConnectionFailedInternal;

+ (NSString *)callServiceErrorOutgoingConnectionFailedExternal;

+ (NSString *)callServiceErrorOutgoingConnectionFailedInternal;

+ (NSString *)callServiceErrorTimeoutWhileConnectingIncoming;

+ (NSString *)callServiceErrorTimeoutWhileConnectingOutgoing;

+ (NSString *)callServiceMissingFulfillReadyToSendIceUpdatesPromise;

+ (NSString *)callServicePeerConnectionAlreadySet;

+ (NSString *)callServicePeerConnectionMissing;

+ (NSString *)contactsErrorContactsIntersectionFailed;

+ (NSString *)errorAttachmentRequestFailed;

+ (NSString *)errorCouldNotPresentViewDueToCall;

+ (NSString *)errorEnableVideoCallingRequestFailed;

+ (NSString *)errorGetDevicesFailed;

+ (NSString *)errorPrekeysAvailablePrekeysRequestFailed;

+ (NSString *)errorPrekeysCurrentSignedPrekeyRequestFailed;

+ (NSString *)errorPrekeysUpdateFailedJustSigned;

+ (NSString *)errorPrekeysUpdateFailedSignedAndOnetime;

+ (NSString *)errorProvisioningCodeRequestFailed;

+ (NSString *)errorProvisioningRequestFailed;

+ (NSString *)errorUnlinkDeviceFailed;

+ (NSString *)errorUpdateAttributesRequestFailed;

+ (NSString *)messageSenderErrorMissingNewPreKeyBundle;

+ (NSString *)messageManagerErrorCallMessageNoActionablePayload;

+ (NSString *)messageManagerErrorCorruptMessage;

+ (NSString *)messageManagerErrorCouldNotHandlePrekeyBundle;

+ (NSString *)messageManagerErrorCouldNotHandleSecureMessage;

+ (NSString *)messageManagerErrorEnvelopeNoActionablePayload;

+ (NSString *)messageManagerErrorEnvelopeTypeKeyExchange;

+ (NSString *)messageManagerErrorEnvelopeTypeOther;

+ (NSString *)messageManagerErrorEnvelopeTypeUnknown;

+ (NSString *)messageManagerErrorInvalidKey;

+ (NSString *)messageManagerErrorInvalidKeyId;

+ (NSString *)messageManagerErrorInvalidMessageVersion;

+ (NSString *)messageManagerErrorInvalidProtocolMessage;

+ (NSString *)messageManagerErrorMessageEnvelopeHasNoContent;

+ (NSString *)messageManagerErrorNoSession;

+ (NSString *)messageManagerErrorOversizeMessage;

+ (NSString *)messageManagerErrorSyncMessageFromUnknownSource;

+ (NSString *)messageManagerErrorUntrustedIdentityKeyException;

+ (NSString *)messageReceiverErrorLargeMessage;

+ (NSString *)messageReceiverErrorOversizeMessage;

+ (NSString *)messageSendErrorCouldNotSerializeMessageJson;

+ (NSString *)messageSendErrorFailedDueToPrekeyUpdateFailures;

+ (NSString *)messageSendErrorFailedDueToUntrustedKey;

+ (NSString *)messageSenderErrorCouldNotFindContacts1;

+ (NSString *)messageSenderErrorCouldNotFindContacts2;

+ (NSString *)messageSenderErrorCouldNotFindContacts3;

+ (NSString *)messageSenderErrorCouldNotLoadAttachment;

+ (NSString *)messageSenderErrorCouldNotParseMismatchedDevicesJson;

+ (NSString *)messageSenderErrorCouldNotWriteAttachment;

+ (NSString *)messageSenderErrorGenericSendFailure;

+ (NSString *)messageSenderErrorInvalidIdentityKeyLength;

+ (NSString *)messageSenderErrorInvalidIdentityKeyType;

+ (NSString *)messageSenderErrorNoMissingOrExtraDevices;

+ (NSString *)messageSenderErrorRecipientPrekeyRequestFailed;

+ (NSString *)messageSenderErrorSendOperationDidNotComplete;

+ (NSString *)messageSenderErrorUnexpectedKeyBundle;

+ (NSString *)peerConnectionClientErrorSendDataChannelMessageFailed;

+ (NSString *)prekeysDeletedOldAcceptedSignedPrekey;

+ (NSString *)prekeysDeletedOldSignedPrekey;

+ (NSString *)prekeysDeletedOldUnacceptedSignedPrekey;

+ (NSString *)profileManagerErrorAvatarUploadFormInvalidAcl;

+ (NSString *)profileManagerErrorAvatarUploadFormInvalidAlgorithm;

+ (NSString *)profileManagerErrorAvatarUploadFormInvalidCredential;

+ (NSString *)profileManagerErrorAvatarUploadFormInvalidDate;

+ (NSString *)profileManagerErrorAvatarUploadFormInvalidKey;

+ (NSString *)profileManagerErrorAvatarUploadFormInvalidPolicy;

+ (NSString *)profileManagerErrorAvatarUploadFormInvalidResponse;

+ (NSString *)profileManagerErrorAvatarUploadFormInvalidSignature;

+ (NSString *)registrationBegan;

+ (NSString *)registrationRegisteredPhoneNumber;

+ (NSString *)registrationRegisteringCode;

+ (NSString *)registrationRegisteringRequestedNewCodeBySms;

+ (NSString *)registrationRegisteringRequestedNewCodeByVoice;

+ (NSString *)registrationRegisteringSubmittedCode;

+ (NSString *)registrationRegistrationFailed;

+ (NSString *)registrationVerificationBack;

+ (NSString *)storageErrorCouldNotDecodeClass;

+ (NSString *)storageErrorCouldNotLoadDatabase;

+ (NSString *)storageErrorCouldNotLoadDatabaseSecondAttempt;

+ (NSString *)storageErrorCouldNotStoreDatabasePassword;

+ (NSString *)storageErrorDeserialization;

+ (NSString *)storageErrorFileProtection;

#pragma mark - Code Generation Marker

@end

NS_ASSUME_NONNULL_END
