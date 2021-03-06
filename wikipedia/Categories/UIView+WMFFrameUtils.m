//
//  UIView+WMFFrameUtils.m
//  Wikipedia
//
//  Created by Brian Gerstle on 2/27/15.
//  Copyright (c) 2015 Wikimedia Foundation. All rights reserved.
//

#import "UIView+WMFFrameUtils.h"

@implementation UIView (WMFFrameUtils)

- (void)wmf_setFrameOrigin:(CGPoint)origin
{
    self.frame = (CGRect) { .origin = origin, .size = self.frame.size };
}

- (void)wmf_setFrameSize:(CGSize)size
{
    self.frame = (CGRect) { .origin = self.frame.origin, .size = size };
}

- (void)wmf_insetWidth:(float)width height:(float)height
{
    self.frame = CGRectInset(self.frame, width, height);
}

- (void)wmf_expandWidth:(float)width height:(float)height
{
    [self wmf_insetWidth:-width height:-height];
}

@end
