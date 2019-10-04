#ifndef RN_GoogleSigning_h
#define RN_GoogleSigning_h

#import <React/RCTBridgeModule.h>
#import <React/RCTConvert.h>
#import <React/RCTComponent.h>

#import <GoogleSignIn/GoogleSignIn.h>


@interface RNGoogleSignin : NSObject<RCTBridgeModule, GIDSignInDelegate, GIDSignInUIDelegate>

+ (BOOL)application:(UIApplication *)application openURL:(NSURL *)url
  sourceApplication:(NSString *)sourceApplication annotation:(id)annotation;

@end

#endif
