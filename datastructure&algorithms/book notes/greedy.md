# greedy
## activity problem
- i always choose to take the solution with minimum finish time so it will give me option to choose much more activities
## proof of activity problem
- we have greedy choice A={a1,a2,a3,.....,an}
- we have optimal solution Aopt={o1,o2,o3,.....,on}
- if i replace o1 with a1
- i will get another optimal solution Aopt`={a1,o2,o3,....,on}
- i could do that because finish time of a1 <= finish time of o1

- we have greedy choice A={a1,a2,a3,.....,an}
- we have optimal solution Aopt={o1,o2,o3,.....,on}
- if i replace on with an
- i will get another optimal solution Aopt`={o1,o2,o3,....,an}
- i could do that because start time of an >= start time of on so it will not intersect with any other activity