//
//  CTMediator+Author.h
//  WZAuthorKit_Category
//
//  Created by 王振 on 2019/1/4.
//

#import <CTMediator/CTMediator.h>
#import <WZAPIsKit/APIRequest.h>

NS_ASSUME_NONNULL_BEGIN

@interface CTMediator (Author)

- (UIViewController*)authorDetailViewController;

- (NSDictionary*)authorReformerWithOriginData:(NSDictionary*)data;

- (NSDictionary *)authorReformer;

- (APIRequest*)authorAPIRequest;

@end

NS_ASSUME_NONNULL_END
