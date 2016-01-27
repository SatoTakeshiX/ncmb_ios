/*
 Copyright 2016 NIFTY Corporation All Rights Reserved.
 
 Licensed under the Apache License, Version 2.0 (the "License");
 you may not use this file except in compliance with the License.
 You may obtain a copy of the License at
 
 http://www.apache.org/licenses/LICENSE-2.0
 
 Unless required by applicable law or agreed to in writing, software
 distributed under the License is distributed on an "AS IS" BASIS,
 WITHOUT WARRANTIES OR CONDITIONS OF ANY KIND, either express or implied.
 See the License for the specific language governing permissions and
 limitations under the License.
 */

#import <Foundation/Foundation.h>
#import "NCMBScriptService.h"


@interface NCMBScript : NSObject

@property NCMBScriptService* service;

@property NSString *scriptName;

@property NCMBScriptRequestMethod method;

+ (instancetype)scriptWithName:(NSString*)name method:(NCMBScriptRequestMethod)method;

+ (instancetype)scriptWithName:(NSString *)name
                        method:(NCMBScriptRequestMethod)method
                      endpoint:(NSString *)endpoint;

- (NSData *)execute:(NSData*)data error:(NSError**)error;

- (void)execute:(NSData *)data
queryDictionary:(NSDictionary *)queryDictionary
      withBlock:(NCMBScriptExecuteCallback)block;

@end
