
#import <UIKit/UIKit.h>

@interface DGWebController : UIViewController

@property (nonatomic,assign) BOOL isNavHidden;

- (void)startToLoadWebURLString:(NSString *)string;

@end
