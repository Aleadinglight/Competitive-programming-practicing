import burlap.domain.singleagent.graphdefined.GraphDefinedDomain;
import burlap.behavior.singleagent.planning.stochastic.valueiteration.ValueIteration;
import burlap.behavior.statehashing.DiscreteStateHashFactory;
import burlap.oomdp.auxiliary.DomainGenerator;
import burlap.oomdp.auxiliary.common.NullTermination;
import burlap.oomdp.core.*;
import burlap.oomdp.core.states.State;
import burlap.oomdp.singleagent.GroundedAction;
import burlap.oomdp.singleagent.RewardFunction;


public class FirstMDP {
	
	DomainGenerator dg;
	Domain domain;
	State initState;
	RewardFunction rf;
	TerminalFunction tf;
	DiscreteStateHashFactory hashFactory;
	
	public FirstMDP() {
		int numStates = 6;
		this.dg = new GraphDefinedDomain(numStates);
		
		((GraphDefinedDomain) this.dg).setTransition(0,0,1,1.);
		((GraphDefinedDomain) this.dg).setTransition(0,1,2,1.);
		((GraphDefinedDomain) this.dg).setTransition(0,2,3,1.);
		((GraphDefinedDomain) this.dg).setTransition(1,0,1,1.);
		((GraphDefinedDomain) this.dg).setTransition(2,0,4,1.);
		((GraphDefinedDomain) this.dg).setTransition(3,0,5,1.);
		((GraphDefinedDomain) this.dg).setTransition(4,0,2,1.);
		((GraphDefinedDomain) this.dg).setTransition(5,0,5,1.);
		
		this.domain = this.dg.generateDomain();   
		this.initState = GraphDefinedDomain.getState(this.domain, 0);
		this.rf = FourParamRF(p1, p2, p3, p4);
		this.tf = new NullTermination();
		this.hashFactory =  new DiscreteStateHashFactory();
	} 
	
	public static class FourParamRF implements ReWardFunction {
		double p1, p2, p3, p4;
		
		public FourParamRF(double p1, double p2, double p3, double p4){
			this.p1 = p1;
			this.p2 = p2;
			this.p3 = p3;
			this.p4 = p4;
		}
		@Override
		public double reward(State s, GroundedAction a, State prime){
			int sid = GraphDefinedDomain.getNodeId(s);
			double r;
			if (sid == 0 || sid ==3)
				r=0;
			else if (sid == 1)
				r = this.p1;
			else if (sid == 2)
				r = this.p2;
			else if (sid == 4)
				r = this.p3;
			else if (sid == 5)
				r = this.p4;
			else
				throw new  RuntimeException("Unknown state: " + sid);
			return r;
		}
	}
	
	public Domain getDomain() {
        return this.domain;
    }
	
	private ValueIteration computeValue(double gamma)
	{
		double maxDelta = 0.0001;
		int maxIterations = 1000;
		ValueIteration vi = new ValueIteration(this.domain, this.rf, this.tf, gamma, this.hashFactory, maxDelta, maxIterations);
		vi.planFromState(this.initialState);
		return vi;
	}
	
	public String bestFirstAction
	
	public static void main(String[] args) {
        // You can add test code here that will be executed when you click "Test Run".
    	FirstMDP fmdp = new FirstMDP();
    	System.out.print("<3 Nha An");
    }
}