/* Copyright (c) 2006-2007 Christopher J. W. Lloyd

Permission is hereby granted, free of charge, to any person obtaining a copy of this software and associated documentation files (the "Software"), to deal in the Software without restriction, including without limitation the rights to use, copy, modify, merge, publish, distribute, sublicense, and/or sell copies of the Software, and to permit persons to whom the Software is furnished to do so, subject to the following conditions:

The above copyright notice and this permission notice shall be included in all copies or substantial portions of the Software.

THE SOFTWARE IS PROVIDED "AS IS", WITHOUT WARRANTY OF ANY KIND, EXPRESS OR IMPLIED, INCLUDING BUT NOT LIMITED TO THE WARRANTIES OF MERCHANTABILITY, FITNESS FOR A PARTICULAR PURPOSE AND NONINFRINGEMENT. IN NO EVENT SHALL THE AUTHORS OR COPYRIGHT HOLDERS BE LIABLE FOR ANY CLAIM, DAMAGES OR OTHER LIABILITY, WHETHER IN AN ACTION OF CONTRACT, TORT OR OTHERWISE, ARISING FROM, OUT OF OR IN CONNECTION WITH THE SOFTWARE OR THE USE OR OTHER DEALINGS IN THE SOFTWARE. */

#import <Foundation/NSObject.h>
#import <Foundation/NSRange.h>

@class NSString,NSEnumerator,NSDictionary,NSPredicate;

@interface NSArray : NSObject <NSCopying,NSMutableCopying,NSCoding>

-initWithArray:(NSArray *)array;
-initWithContentsOfFile:(NSString *)path;
-initWithObjects:(id *)objects count:(unsigned)count;
-initWithObjects:object,...;

+array;
+arrayWithContentsOfFile:(NSString *)path;
+arrayWithObject:object;
+arrayWithObjects:object,...;

+arrayWithArray:(NSArray *)array;
+arrayWithObjects:(id *)objects count:(unsigned)count;

-(unsigned)count;
-objectAtIndex:(unsigned)index;

-(void)getObjects:(id *)objects;
-(void)getObjects:(id *)objects range:(NSRange)range;

-(NSArray *)subarrayWithRange:(NSRange)range;

-(BOOL)isEqualToArray:(NSArray *)array;

-(unsigned)indexOfObject:object;
-(unsigned)indexOfObject:object inRange:(NSRange)range;

-(unsigned)indexOfObjectIdenticalTo:object;
-(unsigned)indexOfObjectIdenticalTo:object inRange:(NSRange)range;

-(NSEnumerator *)objectEnumerator;
-(NSEnumerator *)reverseObjectEnumerator;

-(NSArray *)arrayByAddingObject:object;
-(NSArray *)arrayByAddingObjectsFromArray:(NSArray *)array;
-(NSString *)componentsJoinedByString:(NSString *)string;

-(BOOL)containsObject:object;

-firstObjectCommonWithArray:(NSArray *)array;

-lastObject;

-(NSArray *)sortedArrayUsingSelector:(SEL)selector;
-(NSArray *)sortedArrayUsingFunction:(int (*)(id, id, void *))function
   context:(void *)context;

-(BOOL)writeToFile:(NSString *)path atomically:(BOOL)atomically;

-(void)makeObjectsPerformSelector:(SEL)selector;
-(void)makeObjectsPerformSelector:(SEL)selector withObject:object;

-(NSString *)descriptionWithLocale:(NSDictionary *)locale;
-(NSString *)descriptionWithLocale:(NSDictionary *)locale
   indent:(unsigned)level;

-(NSArray *)filteredArrayUsingPredicate:(NSPredicate *)predicate;

@end

#import <Foundation/NSMutableArray.h>