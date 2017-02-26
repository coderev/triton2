task = {
  id = 7,    --环任务ID
  name = "0",    --环任务标题(整轮标题)
  abort_punish_exploit = 0,    --中途放弃环任务扣减的功勋值
  abort_punish_award = 0,    --多倍任务奖励惩罚
  abort_punish_cold_task = 180,    --接环任务冻结时间惩罚(秒钟)
  award_multi = 4,    --每天前XX轮奖励倍数
  award_multi_times = 10,    --每天前多少轮多倍奖励
  min_level = 30,    --本库的最低等级限制
  max_level = 39,    --本库的最高等级限制(含)
  metier = 5,    --本库对应的门派
  send_1_prob = 1,    --送信1难度的任务出现的概率
  send_2_prob = 2,    --送信2难度的任务出现的概率
  send_3_prob = 3,    --送信3难度的任务出现的概率
  send_4_prob = 4,    --送信4难度的任务出现的概率
  kill_1_prob = 4,    --杀怪1难度的任务出现的概率
  kill_2_prob = 3,    --杀怪2难度的任务出现的概率
  kill_3_prob = 2,    --杀怪3难度的任务出现的概率
  kill_4_prob = 1,    --杀怪4难度的任务出现的概率
  --任务链表
  list = {8438 ,8206 ,8282 ,8375 ,8376 ,8377 ,8378 ,8505 ,8294 ,8545 ,8546 ,8547 ,8548 ,8549 ,8432 ,8433 ,8586 ,8274 ,8285 ,8288},
}