//
//  PXSupportedApplicationsController.h
//  Plexer
//
//  Created by David Owens II on 9/30/12.
//  Copyright (c) 2012 Kiad Software. All rights reserved.
//

#import <Foundation/Foundation.h>
#import "PXTeamConfigurationWindowController.h"

@interface PXSupportedApplicationsController : NSObject<NSTableViewDataSource, NSTableViewDelegate>

@property (assign) IBOutlet NSTableView *supportedApplicationsTableView;
@property (assign) IBOutlet NSPopover *supportedApplicationsPopover;

@property (assign) IBOutlet PXTeamConfigurationWindowController *teamConfigurationWindowController;

- (IBAction)didSelectRowForSupportedApplicationsTableView:(id)sender;

@end