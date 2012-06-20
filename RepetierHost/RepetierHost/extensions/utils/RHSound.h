/*
 Copyright 2011 repetier repetierdev@googlemail.com
 
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

@interface RHSound : NSObject {
    NSSound *soundFinished;
    NSSound *soundPaused;
    NSSound *soundCommand;
    NSSound *soundError;
}
@property (retain) NSSound *soundFinished;
@property (retain) NSSound *soundPaused;
@property (retain) NSSound *soundError;
@property (retain) NSSound *soundCommand;

+(void)createSounds;
-(void)playPrintjobFinished:(BOOL)force;
-(void)playPrintjobPaused:(BOOL)force;
-(void)playError:(BOOL)force;
-(void)playCommand:(BOOL)force;

@end
extern RHSound *sound;
