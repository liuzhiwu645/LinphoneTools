
#import <Foundation/Foundation.h>
#import <UIKit/UIKit.h>
@interface SMLinphoneConfig : NSObject

+ (SMLinphoneConfig *)instance;

- (void)registeByUserName:(NSString *)userName pwd:(NSString *)pwd domain:(NSString *)domain tramsport:(NSString *)transport;

- (void)callPhoneWithPhoneNumber:(NSString *)phone withVideo:(BOOL)video;

- (void)switchCamera;

- (void)enableVideoCodecWithString:(NSString *)codec enable:(BOOL)enable;

- (NSMutableArray *)getAllEnableVideoCodec;

- (NSMutableArray *)getAllEnableAudioCodec;

- (void)acceptCall;

- (void)hold;

- (void)unhold;

- (void)remoteAccount;

- (void)haveCall;

- (void)muteMic;

- (void)enableSpeaker;

- (void)tabeSnapshot;

- (void)takePreviewSnapshot;

- (void)setVideoSize;

- (void)showVideo;

- (void)setRemoteVieoPreviewWindow:(UIView *)preview;

- (void)setCurrentVideoPreviewWindow:(UIView *)preview;




@end
