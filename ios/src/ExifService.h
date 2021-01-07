#import <Foundation/Foundation.h>

@interface ExifService : NSObject
- (NSData *)copyImagePropertiesFrom:(NSData *)sourceImage to:(NSData *)targetImage;
@end
