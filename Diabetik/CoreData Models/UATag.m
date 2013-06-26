//
//  UATag.m
//  Diabetik
//
//  Created by Nial Giacomelli on 18/02/2013.
//  Copyright 2013 Nial Giacomelli
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

#import "UATag.h"
#import "UAEvent.h"

@implementation UATag
@dynamic name, nameLC;
@dynamic events;

#pragma mark - Setters
- (void)setName:(NSString *)aName
{
    [self willChangeValueForKey:@"name"];
    [self setPrimitiveValue:aName forKey:@"name"];
    [self didChangeValueForKey:@"name"];
    
    [self willChangeValueForKey:@"nameLC"];
    [self setPrimitiveValue:[aName lowercaseString] forKey:@"nameLC"];
    [self didChangeValueForKey:@"nameLC"];
}

@end
