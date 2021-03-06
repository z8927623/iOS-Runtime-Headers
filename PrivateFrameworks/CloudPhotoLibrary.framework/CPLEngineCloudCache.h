/* Generated by RuntimeBrowser
   Image: /System/Library/PrivateFrameworks/CloudPhotoLibrary.framework/CloudPhotoLibrary
 */

@class CPLPlatformObject, NSString;

@interface CPLEngineCloudCache : CPLEngineStorage <CPLAbstractObject> {
}

@property(copy,readonly) NSString * debugDescription;
@property(copy,readonly) NSString * description;
@property(readonly) BOOL hasDoneAFirstSynchronization;
@property(readonly) unsigned int hash;
@property(readonly) CPLPlatformObject * platformObject;
@property(readonly) Class superclass;

- (BOOL)_remapRecord:(id)arg1 inBatch:(id)arg2 error:(id*)arg3;
- (BOOL)addRecord:(id)arg1 isFinal:(BOOL)arg2 error:(id*)arg3;
- (BOOL)applyBatch:(id)arg1 isFinal:(BOOL)arg2 withError:(id*)arg3;
- (id)cloudChangeBatchFromBatch:(id)arg1 usingMapping:(id)arg2 isFinal:(BOOL)arg3 withError:(id*)arg4;
- (BOOL)commitStagedChangesWithError:(id*)arg1;
- (BOOL)deleteRecordWithIdentifier:(id)arg1 isFinal:(BOOL)arg2 error:(id*)arg3;
- (BOOL)discardStagedChangesWithError:(id*)arg1;
- (void)getCommittedRecord:(id*)arg1 stagedRecord:(id*)arg2 forIdentifier:(id)arg3;
- (BOOL)hasDoneAFirstSynchronization;
- (BOOL)hasRecordWithIdentifier:(id)arg1;
- (id)recordWithIdentifier:(id)arg1 isFinal:(BOOL)arg2;
- (id)recordsOfClass:(Class)arg1 isFinal:(BOOL)arg2;
- (id)recordsWithRelatedIdentifier:(id)arg1 isFinal:(BOOL)arg2;
- (BOOL)remapAllRecordsWithPreviousIdentifier:(id)arg1 newIdentifier:(id)arg2 error:(id*)arg3;
- (BOOL)resetSyncAnchorWithError:(id*)arg1;
- (BOOL)resetWithError:(id*)arg1;
- (id)resourceOfType:(unsigned int)arg1 forRecordWithIdentifier:(id)arg2 error:(id*)arg3;
- (BOOL)setSyncAnchor:(id)arg1 error:(id*)arg2;
- (id)syncAnchor;
- (BOOL)updateRecord:(id)arg1 isFinal:(BOOL)arg2 error:(id*)arg3;

@end
