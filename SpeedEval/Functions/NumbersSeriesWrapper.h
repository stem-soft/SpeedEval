//
//  NumbersSeriesWrapper.h
//  SpeedEval
//
//  Created by WESTOWN on 09/05/2021.
//

#import <Foundation/Foundation.h>

@interface NumbersSeriesWrapper: NSObject


-(void)printRandomFromCPP;
-(void)printRandomFromObjCPP;
-(double)getTimeElapsedForRandomListGeneration:(int)intFigure inCase:(int)algo;

@end
