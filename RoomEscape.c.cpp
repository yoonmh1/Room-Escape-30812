# 포함  < stdio.h >
# 포함  < stdlib.h >
# 포함  < string.h >
# 포함  < windows.h >

# TRUE 1을 정의  
# FALSE 0 정의  

무효  소개 ();
빈  방 ();
빈  프레임 ();	// 1. 이 사람
빈  침대 ();		// 2. 보호
빈  냉장고 ();	// 3. 수정중
무효  금고 ();	// 4. 수정중  
공허한  옷장 ();	// 5. 수정중
보이드  도어 ();	// 6. 수정중
무효  door_password ();

int isBrokenFrame = FALSE ;	// 가정상
int isBrokenBed = FALSE ;	// 중요하다

int isFindMagnifyingGlass = FALSE ;	// 문의하기
int isFindGoldKey = FALSE ;		// 금색 뷔
int isFindSilverKey = FALSE ; 	// 은색 블러드

int isOpenSafebox = FALSE ;		// 금고 금고

정수  메인 () {
	int 메뉴;
	
	동안 ( 1 ) {
		printf ( " 비버의 방 \n\n " );
		printf ( " 1. 게임 시작하기 \n " );
		printf ( " 0. 백화점 안해 \n " );
		printf ( " >> " );
		scanf ( " %d " , & 메뉴);
		
		스위치 (메뉴) {
			사례  1 :
				소개 ();
				방 ();
				휴식 ;
			사례  0 :
				 0 반환 ;
			기본값 :
				printf ( " 입력 오류 \n\n " );
				휴식 ;
		}
	}
	
}

무효  소개 () {
	시스템 ( " cls " );
	printf ( " \n\n " );
	printf ( " 오늘은 소실이 '미란이와 공원에 가는 날'. \n\n " );
	수면 ( 1500 );
	printf ( " 매경매장대박에서 길을 찾다. \n " );
	수면 ( 2500 );
	printf ( " 흑인 조직에 거래하는 현장을 발견하고 \n " );
	수면 ( 1500 );
	의 printf ( " 사진을 찍고 도망가 려던 찰나에 뒤통수 를 맞았 당 \ n \ n " );
	수면 ( 2500 );
	의 printf ( " 눈을 떠 보니 낯선 방안에 들어와 있다 .. \ n " );
	수면 ( 1500 );
	printf ( " 비버사진이 있다.. \n\n " );
	수면 ( 1500 );
	의 printf ( " 여긴 어디지 .. 이곳에서 탈출해야된다 ..? \ n \ n " );
	수면 ( 1500 );
	printf ( " 집에 찌찌 치킨발이 기다리고 있다!. \n\n " );
	수면 ( 1500 );
	시스템 ( " 일시 중지 " );
}

공허한  방 () {
	int 메뉴;
	
	동안 ( 1 ) {
		시스템 ( " cls " );	
		printf ( " [비버의 방] \n\n " );
		printf ( " 방에서 할 수 있는 이름: \n\n " );
		printf ( " 1. 컴퓨터 2. 라꾸라꾸 3. 엑소 \n " );
		printf ( " 4. 화장실 5. 슬라이딩 6. 앱 \n " );
			
		printf ( " >> " );
		scanf ( " %d " , & 메뉴);
		
		스위치 (메뉴) {
			사례  1 :
				if (isBrokenFrame) {
					printf ( " \n 더 이상 유지되지 않습니다. \n " );
					시스템 ( " 일시 중지 " );
				} 다른 {
					프레임 ();					
				}
				휴식 ;
			사례  2 :
				침대 ();
				휴식 ;
			사례  3 :
				냉장고 ();
				휴식 ;
			사례  4 :
				금고 ();
				휴식 ;
			사례  5 :
				옷장 ();
				휴식 ;
			사례  6 :
				문 ();
				휴식 ;
			기본값 :
				printf ( " \n # ERROR # 입력값 오류 \n " );
				시스템 ( " 일시 중지 " );
		}
	}
	
}

void  frame (){ // 1. 책상
	int 메뉴;
	
	동안 ( 1 ) {
		시스템 ( " cls " );
		printf ( " [비버의 방]-[책상] \n\n " );
		printf ( " 큰책상이 있다. \n\n " );
		printf ( " 1. 컴퓨터를 맞추다 \n " );
		printf ( " 2. 컴퓨터를 부순다 \n " );
		printf ( " 0. 이전 기 \n " )
		
		printf ( " >> " );
		scanf ( " %d " , & 메뉴);
		
		스위치 (메뉴) {
			사례  1 :
				if (isFindMagnifyingGlass) {
				} 다른 {
					printf ( " \n 컴퓨터에는 별거 없는 것 같다 . \n\n " );
				}
				휴식 ;
			사례  2 :
				isBrokenFrame = 참 ;
				printf ( " \n 컴퓨터. 파괴된다.. \n " );
				printf ( " 크쏘!!! 철제 책상이 완성도!! \n\n " );
				의 printf ( " 좀더 레벨 업을해야 될거 같다. \ n \ n " );
				시스템 ( " 일시 중지 " );
				반환 ;
			사례  0 :
				반환 ;
			기본값 :
				printf ( " \n 궁극적인 효1 \n\n " );
				휴식 ;
		}
		시스템 ( " 일시 중지 " );
	}	
}	

빈  침대 () { // 2. 침대
	int 메뉴;
	
	동안 ( 1 ) {
		시스템 ( " cls " );
		printf ( " [원룸]-[라꾸라꾸쇼] \n\n " );
		printf ( " 에 라꾸라꾸 쇼파가. \n\n " );
		printf ( " 1. 라꾸라꾸꾸꾸라꾸다 \n " );
		printf ( " 2. 라꾸라꾸다 \n " );
		printf ( " 3. 이불을 최적다 \n " );
		printf ( " 0. 이전 기 \n " )
		
		printf ( " >> " );
		scanf ( " %d " , & 메뉴);
		
		스위치 (메뉴) {
			사례  1 :
				if (isBrokenBed) {
					의 printf ( " \ n 라꾸라꾸 침대는 파괴되었다 .. \ n \ n " );
				} 다른 {
					printf ( " \n 먼지가 가득하다 어우더러. \n " );	
				}
				시스템 ( " 일시 중지 " );
				휴식 ;
			사례  2 :
				if (isBrokenBed) {
					의 printf ( " \ n 침대가 부서져서 더 이상 찾을 수 없다. \ n \ n " );
				} 다른 {
					시스템 ( " cls " );
					printf ( " [원룸]-[쇼파]-[쇼파] \n\n " );
					printf ( " \n 보통 ' 꾸라꾸라꾸라' . \n\n " );
					printf ( " 1. 곽을 『파괴 』. \n " );
					printf ( " 2. 프레임을 『 살려 』 . \n " );
					printf ( " >> " );
					scanf ( " %d " , & 메뉴);
					
					스위치 (메뉴) {
						사례  1 :
							isBrokenBed = 참 ;	// 현재 수명
							printf ( " \n # 갑 갑 " ); \n\n " )
							printf ( " 1. 잔해를 뒤로. \n " );
							printf ( " 2. 머뭇거리다. \n " );
							printf ( " >> " );
							scanf ( " %d " , & 메뉴);
							
							스위치 (메뉴) {
								사례  1 :
									printf ( " \n 메모장. 떠오르는 생각은? \n " );
									printf ( " 아무것도 없는...크크??? \n " );
									printf ( " 월 = 3 \n 화 = 5 \n 수 = 4 \n 목 = ? \n\n " );
									printf ( " EZ하노 \n " );
									휴식 ;
								사례  2 :
									printf ( " \n 나이 일정다. 나이 두자. \n\n " );
									휴식 ;
							기본값 :
								printf ( " \n 결정 을 내리기. \n\n " );
								휴식 ;
							}
							휴식 ;
						사례  2 :
							printf ( " \n 와타시가 『생존』을 강조하지 말라고... \n\n " );
							휴식 ;
						기본값 :
							printf ( " \n 결정 을 내리기. \n\n " );
							휴식 ;
					}	
				}
				시스템 ( " 일시 중지 " );
				휴식 ;		
			사례  3 :
				시스템 ( " cls " );
				printf ( " [원룸]-[쇼]-[이불] \n\n " );
				의 printf ( " \ n 베개에서는 특이한 점이 보이지 않는다. \ n \ n " );
				printf ( " 1. 이불 사이를 뒤돌아 \n " );
				의 printf ( " 2. 이불을 찢어 버린다 \ n " );
				printf ( " >> " );
				scanf ( " %d " , & 메뉴);
				
				스위치 (메뉴) {
					사례  1 :
						if (isFindGoldKey) {
							printf ( " \n 예상치 못한 상황에서도 . \n\n " );
						} 다른 {
							isFindGoldKey = 참 ;	// 금색
							printf ( " \n 이불 엄마는 처음으로 발견했습니다. 강력하게 추천하셨습니까? \n\n " );
						}
						휴식 ;
					사례  2 :
						printf ( " \n ". " 내비두자. \n\n " );
						휴식 ;
					기본값 :
						printf ( " \n 아몰랑. 이전 자. \n\n " );
						휴식 ;
						
				}
				시스템 ( " 일시 중지 " );
				휴식 ;
			사례  0 :
				반환 ;
			기본값 :
				printf ( " #오류 #아아아아아 \n\n " );
				시스템 ( " 일시 중지 " );
		}
	}
}		

void  냉장고 (){ // 3. 냉장고
	int 메뉴;
	
	동안 ( 1 ) {
		시스템 ( " cls " );
		printf ( " [비버의 방]-[냉장고 ] \n\n " );
		의 printf ( " LG 신상 냉장고가 방 한켠에있다 뭐가 있는지 볼까낭 . \ n " );
		printf ( " 푸드 플레이스 갑. \n\n " );
		printf ( " 1. LPG 를 최적 다 \n " );
		printf ( " 2. 해물탕을 다다 \n " );
		의 printf ( " 3. 사과를 살펴 본다 \ n " );
		printf ( " 4. 뉴트리아앞을 다다 \n " );
		printf ( " 5. 닭발을 다친다 \n " ) ;
		printf ( " 0. 이전 기 \n " )
		
		printf ( " >> " );
		scanf ( " %d " , & 메뉴);
		
		스위치 (메뉴) {
			사례  1 :
				printf ( " \n\n " );
				printf ( " \n 이게 왜 여기 있는 걸 수현이 집인가? \n\n " );
				휴식 ;
			사례  2 :
				printf ( " \n 물비린이 쟁쟁한 건가?.. \n\n " );
				휴식 ;
			사례  3 :
				printf ( " \n 야드가 틀딱다 체리다 광고 하고 있다.. \n\n " );
				휴식 ;
			사례  4 :
				printf ( " \n 다2 빙을 신청하는 사람.. \n\n " );
				휴식 ;
			사례  5 :
				의 printf ( " \ n 상표 만 찌찌 닭발이고 쭈쭈 닭발 이였다. \ n 얼른 나가서 찌닭을 먹어야 겠어! \ n \ n " );
				휴식 ;
			사례  0 :
				반환 ;
			기본값 :
				printf ( " \n qudtls ㅋㅋ \n\n " );
				휴식 ;
		}
		시스템 ( " 일시 중지 " );
	}
}	

무효  safebox () { // 4. 장실
	int 메뉴;
	
	동안 ( 1 ) {
		시스템 ( " cls " );
		printf ( " [비버의 방]-[화장실] \n " );
		printf ( " 물비린내가 나는 화장실이다. \n\n " );
		printf ( " 1. 화장실 문을 연다 \n " );
		printf ( " 2. 화장실 문을 부순다 \n " );
		printf ( " 3. 화장실 문을 다다 \n " );
		printf ( " 0. 이전 기 \n " )
		
		printf ( " >> " );
		scanf ( " %d " , & 메뉴);
		
		스위치 (메뉴) {
			사례  1 :
				if (isOpenSafebox) {
					의 printf ( " \ n 응 이미 열었 어 ㅋㅋ 까먹었 으면 다시 하셈 ㅋㅋ . \ n \ n " );
					휴식 ;
				}
				if (isFindGoldKey && isFindSilverKey) {
					isFindMagnifyingGlass = 참 ;	// 화장실 찾기
					isOpenSafebox = 참 ;	// 일정표열
					의 printf ( " \ n 화장실 세면대에 메모장이있다 \ n " );	
					의 printf ( " 메모지에는 큰 글씨로 글이 적혀 있다 . \ n \ n " );
					printf ( " '하츠네미쿠의 나이는?. \n ㅋㅋ개쉽네 \n " );
					의 printf ( " 빨리 풀고 찌닭 먹으러 가야징 ' \ n \ n " );
					printf ( " 부히?R부히?R 후헤?m \n\n " );					
				} 다른 {
					의 printf ( " \ n 화장실에 열쇠가 왜 2 개나 필요 하냐고 !!. \ n \ n " );
				}
				휴식 ;
			사례  2 :
				printf ( " \n『파괴』해야 할 군 \n\n " );
				printf ( " \n 크 쏘!!! 뭔놈에 집이전다 철로어 \n\n " );
				휴식 ;
			사례  3 :
				printf ( " \n 아니 아니 득데에 플레이스 캠퍼임? \n\n " );
				휴식 ;
			사례  0 :
				반환 ;
			기본값 :
				의 printf ( " \ n 똑바로 좀 써라 손가락 문제 있음? \ n \ n " );
				휴식 ;
		}
		시스템 ( " 일시 중지 " );
	}	
}	

void  closet (){ // 5. 슬라이딩 도어
	int 메뉴;
	
	동안 ( 1 ) {
		시스템 ( " cls " );
		printf ( " [비버의 방]-[옷장] \n\n " );
		printf ( " 방을 가득 채울 정도 이다. \n\n " );
		printf ( " 1. 수현이 옷을 다다 \n " );
		printf ( " 2. 동현이 옷을 다다 \n " );
		printf ( " 3. 석현이 옷을 다다 \n " );
		printf ( " 4. 석진이 옷을 다다 \n " );
		printf ( " 5. 슬라이딩을 부순다 \n " );
		printf ( " 0. 이전 기 \n " )
		
		printf ( " >> " );
		scanf ( " %d " , & 메뉴);
		
		스위치 (메뉴) {
			사례  1 :
				if (isFindSilverKey) {
					의 printf ( " \ n 수현이 옷에는 더이상 찾을 게 없어 보인다 쓸모없는 놈 . \ n \ n " );
				} 다른 {
					isFindSilverKey = 참 ;		// 은색이 보이네요
					printf ( " \n 수현이 옷에 주머니 은색열 와 LPG 명세 . \n\n " );
				}
				휴식 ;
			사례  2 :
				printf ( " \n 동현이옷사이에 메모한다 \n\n " );
				printf ( " \n 9 + 3 = 12 \n 5 + 10 = 3 \n 7 + 9= 4 \n 15 + 6 = ??? \n\n " );
				printf ( " 개쉽노ㅋ " );
				휴식 ;
			사례  3 :
				printf ( " \n 석현이 옷깃찌찌발명이 있다. \n\n " );
				휴식 ;
			사례  4 :
				printf ( " \n 석진이 옷깃은 은색과 팔도청과 반영된다. \n\n " );
				휴식 ;
			사례  5 :
				printf ( " \n 후후후 『옷장』이라... \n 부둣가 쥬지.. \n 크쏘!!!!!!!!!!! \n 철제옷장인 까치 시간..랄까? \n\n " );
				휴식 ;
			사례  0 :
				반환 ;
			기본값 :
				printf ( " \n 야레야레..손나박하나.. \n\n " );
				휴식 ;
		}
		시스템 ( " 일시 중지 " );
	}	
}	

void  door (){ // 6. 협문 문
	int 메뉴;
	
	동안 ( 1 ) {
		시스템 ( " cls " );
		printf ( " [비버의방]-[탈출구] \n\n " );
		printf ( " 오잉문이요 언제쯤. \n " );
		printf ( " 문답은 써있습니다. \n\n " );
		
		printf ( " 1. 블랙박스를 묶는다 \n " );
		printf ( " 2. 입력한다 \n " );
		printf ( " 0. 이전 기 \n " )
		
		printf ( " >> " );
		scanf ( " %d " , & 메뉴);
		
		스위치 (메뉴) {
			사례  1 :
				printf ( " \n 화이트보드와 심플하다 ? \n\n " );
				printf ( " 방에 씌워주세요. \n\n " );
				의 printf ( " 그러게 왜 사진 찍어 가지고 처 잡혀 옴 ㅋㅋ \ n " );
				휴식 ;
			사례  2 :
				door_password ();
				휴식 ;
			사례  0 :
				반환 ;
			기본값 :
				printf ( " \n 응 아니야 다시해 ㅋㅋ \n\n " );
				휴식 ;
		}
		시스템 ( " 일시 중지 " );
	}	
}	

무효  door_password () {
	문자 패스[ 5 ] = " 6169 " , 임시[ 5 ];
	
	시스템 ( " cls " );
	printf ( " \n\n       [ 비밀번호 ] \n\n " );
	printf ( " >> " );
	scanf ( " %s " , &temp);
	
	if (! strcmp (통과, 임시)) {
		시스템 ( " cls " );
		printf ( " \n\n 아ㅋㅋㅋㅋ \ " 네 ㅋㅋ. \n );
		printf ( " 아베스트 고프네. \n " );
		printf ( " 아 그나저나 어디에 있냐 ㅋㅋ \n " );
		의 printf ( " 아 몰랑 집 가서 찌닭이나 먹어야지. \ n \ n " );
		의 printf ( " 그 이후 주인공은 우여곡절 끝에 집에 돌아가 상한 찌닭을보고 분노하였고 ... \ n \ n " );
		printf ( " 그 다음.. " );
		printf ( " #1.슬픈 엔딩 " );
		시스템 ( " 일시 중지 " );
		출구 ( 0 );
	} 다른 {
		printf ( " \n\n 옹모름 ㅋㅋ 아ㅋㅋ 너만모름 ㅋㅋ \n\n " );
		반환 ;	
	}
}

