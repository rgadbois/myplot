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
    IBOutlet CPTGraphHostingView *hostingView;
    CPTXYGraph *graph;
    NSArray *plotData;
    CPTFill *areaFill;
    CPTLineStyle *barLineStyle;
}
@property(readwrite, retain, nonatomic) NSMutableArray *dataForPlot;

@end
