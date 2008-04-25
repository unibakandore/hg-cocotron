#import <ApplicationServices/CGImageSource.h>
#import "KGImageSource.h"

CGImageSourceRef CGImageSourceCreateWithData(id data,id options) {
   return [KGImageSource newImageSourceWithData:data options:options];
}

CGImageRef CGImageSourceCreateImageAtIndex(CGImageSourceRef self,size_t index,id options) {
   return [self imageAtIndex:index options:options];
}

