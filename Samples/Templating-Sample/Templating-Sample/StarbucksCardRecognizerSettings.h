//
//  StarbucksCardRecognizerSettings.h
//  Templating-Sample
//
//  Created by Jure Cular on 29/03/2017.
//  Copyright © 2017 Dino. All rights reserved.
//

#import <MicroBlink/MicroBlink.h>

@interface StarbucksCardRecognizerSettings : PPBlinkOcrRecognizerSettings

- (NSString *)extractMessageFromResult:(PPBlinkOcrRecognizerResult *)result;

@end