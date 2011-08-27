//
//  myplotViewController.h
//  myplot
//
//  Created by Robert Gadbois on 8/26/11.
//  Copyright 2011 __MyCompanyName__. All rights reserved.
//

#import <UIKit/UIKit.h>
#import "CorePlot-CocoaTouch.h"
@interface myplotViewController : UIViewController <CPTPlotDataSource> {
    
	CPTXYGraph *graph;
	
	NSMutableArray *dataForPlot;
}
@property(readwrite, retain, nonatomic) NSMutableArray *dataForPlot;

@end
