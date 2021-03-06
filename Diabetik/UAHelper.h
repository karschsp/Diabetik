//
//  UAHelper.h
//  Diabetik
//
//  Created by Nial Giacomelli on 17/12/2012.
//  Copyright (c) 2013-2014 Nial Giacomelli
//
//  Licensed under the Apache License, Version 2.0 (the "License");
//  you may not use this file except in compliance with the License.
//  You may obtain a copy of the License at
//
//  http://www.apache.org/licenses/LICENSE-2.0
//
//  Unless required by applicable law or agreed to in writing, software
//  distributed under the License is distributed on an "AS IS" BASIS,
//  WITHOUT WARRANTIES OR CONDITIONS OF ANY KIND, either express or implied.
//  See the License for the specific language governing permissions and
//  limitations under the License.
//

#import <Foundation/Foundation.h>

@interface UAHelper : NSObject

// Formatters
+ (NSString *)formatMinutes:(double)minutes;
+ (NSNumber *)formatBGReadingWithValue:(NSNumber *)value inUnit:(NSInteger)unit;
+ (NSDateFormatter *)shortTimeFormatter;
+ (NSDateFormatter *)hhmmTimeFormatter;
+ (NSNumberFormatter *)glucoseNumberFormatter;
+ (NSNumberFormatter *)standardNumberFormatter;

// Converters
+ (NSNumber *)convertBGValue:(NSNumber *)value fromUnit:(NSInteger)fromUnit toUnit:(NSInteger)toUnit;

// Helpers
+ (NSInteger)userBGUnit;
+ (BOOL)isBGLevelSafe:(double)value;

@end
